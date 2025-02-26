// print correct factorial of the variable "num"

#include<stdio.h>
int factorial(int n){
    if(n == 2)
        return 1;
    else
        return n*factorial(n-1);
}

int main(void){
    int num = 8;
    printf("%d\n", factorial(num));
}