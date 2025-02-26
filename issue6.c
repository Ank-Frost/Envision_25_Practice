// Make sure the program is working correct logically

#include<stdio.h>
#include<string.h>
int main(void){
    char* str1 = "This is a string";
    char* str2 = "This is another string";

    if(strcmp(str1, str2))
        printf("Strings are same.\n");
    else
        printf("Strings are not same.\n");
}