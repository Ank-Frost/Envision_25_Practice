// Only printed the given string, nothing more
// didn't count the number of characters in the string manually

#include <stdio.h>
#include <string.h>
int main(void)
{
    char *str = "Welcome to IEEE\n";
    for (int i = 0; i < strlen(str) - 1; i++)
    {
        printf("%c", str[i]);
    }
    printf("\n");
}