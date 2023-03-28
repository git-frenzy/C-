#include <stdio.h>

int main() {

    int n= 5;

    int arr[5]={5, 2, 0, 21, 17};


    for(int i=0; i<n; i++){

        for(int j=0; j<n-i-1; j++){

            int temp;
            if(arr[j]>arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }

        }
    }

    for(int i=0; i<n; i++){
        printf("%d\t", arr[i]);
    }



}
