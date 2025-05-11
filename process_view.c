#include <ncurses.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#define MAX_LINE 1024

void draw_processes(WINDOW *win) {
    FILE *fp;
    char line[MAX_LINE];
    int row = 1;

    werase(win); // Clear window
    box(win, 0, 0);
    mvwprintw(win, 0, 2, " Process Viewer(Press E to Exit)");
    mvwprintw(win, 1, 2, "PID     TTY          TIME     CMD");

    fp = popen("ps -a", "r");
    if (fp == NULL) {
        mvwprintw(win, 2, 2, "Failed to run ps command");
        wrefresh(win);
        return;
    }

    fgets(line, sizeof(line), fp); // Skip the header line

    while (fgets(line, sizeof(line), fp) != NULL && row < LINES - 2) {
        mvwprintw(win, ++row, 2, "%.*s", COLS - 4, line); // prevent overflow
    }

    pclose(fp);
    wrefresh(win);
}

int main() {
    initscr();
    noecho();
    cbreak();
    curs_set(0);
    nodelay(stdscr, TRUE);  // Don't block on getch()
    keypad(stdscr, TRUE);   // Enable function keys

    WINDOW *win = newwin(LINES, COLS, 0, 0);
    int ch;

    while (1) {
        draw_processes(win);

        ch = getch(); // Non-blocking key check
        if (ch == 'E' || ch == 'e') {
            break;
        }

        usleep(2000000); // Refresh every 2 seconds
    }

    delwin(win);
    endwin();
    return 0;
}

