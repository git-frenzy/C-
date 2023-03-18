#include "customfunc.h"
#include <iostream>
#include <cstdlib>


int bubbleSort(int *arr, int n) {
    int temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}


int realloc(int *ptr, int n) {

    int size = n * sizeof(int);
    std::cout << "current size of array: " << size << std::endl;


    int *ptr2=NULL;
     ptr2 = (int*) realloc(ptr, 10*sizeof(int));

    if(new_ptr==NULL)
    {
        cout << "Memory Re-allocation Failed";
        exit(1);
    }


}

void output(int *arr, int n) {

    std::cout << "{ ";
    for (int i = 0; i < n; i++) {
        std::cout << *(arr + i) << " ";
    }
    std::cout << "}";
}

int operation(int *arr, int n) {

    char op;

    std::cout << "choose an operator  " << std::endl;
    std::cout << "[+, -, *, %]" << std::endl;
    std::cin >> op;


    if (op == 'x') {
        std::cout << "exited" << std::endl;
    } else if (op == '+' || op == '-' || op == '*' || op == '/' || op == '%') {


        //addition
        if (op == '+') {
            int ans = 0;
            for (int i = 0; i < n; i++) {
                ans += *(arr + i);
            }
            return ans;

            //difference
        } else if (op == '-') {
            int ans = arr[0] - arr[1];
            for (int i = 2; i < n; i++) {
                ans -= arr[i];
            }
            return ans;

            // multiplication
        } else if (op == '*') {
            int ans = 1;
            for (int i = 0; i < n; i++) {
                ans *= arr[i];
            }
            return ans;

            // mod
        } else if (op == '%') {
            int ans = arr[0];
            for (int i = 1; i < n; i++) {
                ans %= arr[i];
                if (ans == 1) {
                    break;
                }
            }
            return ans;

        } else {
            std::cout << "invalid operation" << std::endl;
        }

    } else {
        std::cout << "invalid operation" << std::endl;

    }

}

/*
int* input(int& n) {
    std::cout << "Enter the size of the array: ";
    std::cin >> n;

    int* arr = (int*) std::malloc(sizeof(int) * n);

    std::cout << "Enter the elements of the array: "<<std::endl;
    for (int i = 0; i < n; i++) {
        std::cout << "input for index " << i << " = ";
        std::cin >> *(arr + i);
        // std::cin >> arr[i];  // this also offers the same functionality as the above statement
    }

    return *arr;
}
 */


/*
int input(int *arr, int n) {
    std::cout << "enter the size of the array : ";
    std::cin >> n;
    std::cout << std::endl;
    /////////////// dynamic memory allocation
    int *arr = (int *) malloc(n * sizeof(int));
//    arr = (int*) std::realloc(arr, sizeof(int) * n);
    /////////////// element input in the array
    std::cout << "enter the elements in the array" << std::endl;
    for (int i = 0; i < n; i++) {
        std::cout << "input for index " << i << " = ";
        std::cin >> *(arr + i);
        // std::cin >> arr[i];  // this also offers the same functionality as the above statement
    }
}

 */


/*

int bubbleSort(int *arr, int n) {
    int temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (*(arr + j) > *(arr + (j + 1))) {
                temp = *(arr + j);
                *(arr + j) = *(arr + (j + 1));
                *(arr + (j + 1)) = temp;
            }
        }
    }
    return 0;
}

*/


/*
int bubbleSort(int *arr, int n) {
    bool swapped;
    for (int i = 0; i < n - 1; i++) {
        swapped = false;
        for (int j = 0; j < n - i - 1; j++) {
            if (*(arr + j) > *(arr + j + 1)) {
                std::swap(*(arr + j), *(arr + j + 1));
                swapped = true;
            }
        }
        if (!swapped) {
            break;
        }
    }
}
*/