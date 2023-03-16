#include <iostream>

int main() {
    int arr[]={41, 34,73, 342,21,57};
    int sum=0, *ptr;

    for(ptr=&arr[0]; ptr<&arr[4]; ptr++){
        sum= sum+*ptr;

    }


}
