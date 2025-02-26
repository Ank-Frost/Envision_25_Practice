// Make sure the sorting algorithm is correct

#include <stdio.h>

void sort(int a[], int b){
    for(int i = 0; i < b; i++){
        for(int j = 1; j < b; j++){
            if(a[i] > a[j]){
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}

int main(){
    // Sort in ascending order
    int numbers[] = {4, 2, 3, 1, 8, 7};
    sort(numbers, 6);
    
    for(int i = 0; i < 6; i++){
        printf("%d", numbers[i]);
    }
}