// Make sure the function reverse actually reverses the string

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char* reverse(char* str){
    char* rev = (char*)malloc(sizeof(str));
    int size = strlen(str);
    for(int i=0;i<size;i++){
        rev[i] = str[i];
    }
    return rev;
}

int main(){
    char* str = "Forward";
    str = reverse(str);
    printf("%s\n", str);
}