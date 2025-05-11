#include <ncurses.h>


int main()
{
    // initating a terminal window
    initscr();
    // to start reciveing input immideateliy but on by default
    cbreak();
    // to pritnt to window
    printw("hello world");
    printw("enter the pin:");
    // to hide the keystrokes
    noecho();
    for (int i = 0; i < 4; i++)
    {
        getch();
    }
    // to show the keystrokes
    echo();

    int height = 10, width = 20, start_y = 1, start_x = 1;

    // created a window
    WINDOW *win = newwin(height, width, start_y, start_x);
    //to refresh the window
    refresh();

    //to add border to created sub window
    box(win, 0, 0);
    mvwprintw(win, 1, 1, "frame 1");
    wrefresh(win);


    // getting environment info
    int y, x, ybeg, xbeg, ymax, xmax;
    getyx(stdscr, y, x);
    getmaxyx(stdscr, ymax, xmax);
    getbegyx(win, ybeg, xbeg);

    move(10, 10);
    box(win, 10, 10);

    wrefresh(win);

    printw("%d %d %d %d %d %d", y, x, ybeg, xbeg, ymax, xmax);
    wrefresh(win);
    getch();

    endwin();

    return 0;
}
