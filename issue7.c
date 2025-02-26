// Make sure the output is the correct sum of a and b

#include<stdio.h>
#include<stdlib.h>

int main(void){
    int a = 5;
    int* b = (int*)malloc(sizeof(int));
    *b = 7;
    printf("%d\n", (a+b));
}