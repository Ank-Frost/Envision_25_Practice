// Make sure the program prints the string correctly

#include <stdio.h>

int main(){
    // Printing all the characters in an array
    char z[] = {'h', 'e', 'l', 'l', 'o', '!'};

    char new[50] = ""; 

    for(int i = 0; i < 6; i++){
        new[i] =  z;
    }

    for(int i = 0; i < 6; i++){
        printf("%c", new[i]);
    }
    printf("\n");
    return 0;

}