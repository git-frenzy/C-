#include <iostream>
#include <cstdlib>
#include "customfunc.h"

int main() {


    int n;
    std::cout << "enter the size of the array : ";
    std::cin >> n;
    std::cout << std::endl;
    /////////////// dynamic memory allocation
    int *arr = (int *) malloc(n * sizeof(int));
    /////////////// element input in the array
    std::cout << "enter the elements in the array" << std::endl;
    for (int i = 0; i < n; i++) {
        std::cout << "input for index " << i << " = ";
        std::cin >> *(arr + i);
        // std::cin >> arr[i];  // this also offers the same functionality as the above statement
    }

    std::cout << std::endl;

//    output(arr, n);

    std::cout << "sorted array:";

//    std::cout << std::endl;

    bubbleSort(arr, n);

    std::cout << std::endl;

    output(arr, n);

    std::cout << std::endl;

    std::cout << std::endl;

    int ans = operation(arr, n);

    std::cout << std::endl << "Ans: " << ans << std::endl;

}




/////////////// dynamic memory reallocation

/*
int realc(int* arr) {


    std::cout << "dynamic memory reallocation" << std::endl;

    int n2;
    arr = realloc(arr, n2 * sizeof(int));


}

 */

/////////////// operation function
/*
void oper(int arr[], int n, char op) {

    if (op == 'x') {
        std::cout << "exited" << std::endl;
    } else if (op == '+' || op == '-' || op == '*' || op == '/' || op == '%') {
        //sum
        if (op == '+') {
            int sum;
            for (int i = 0; i < n; i++) {
                for (int i = 0; i < n; i++) {
                    sum += arr[i];
                }
            }
            //difference
        } else if (op == '-') {

        }
    } else {

    }
}

/////////////// bubble sort function
int *bubbleSort(int arr[], int n) {
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
    return (arr);
}


int* input(int &n){


//    char op;
    int *arr;


    std::cout << "enter the size of the array : ";
    std::cin >> n;
    std::cout << std::endl;


    /////////////// dynamic memory allocation

    arr = (int *) malloc(n * sizeof(int));


    /////////////// element input in the array

    std::cout << "enter the elements in the array" << std::endl;

    for (int i = 0; i < n; i++) {
        std::cout << "input for index " << i << " = ";
        std::cin >> arr[i];
    }
    std::cout << std::endl;


    return (arr);



}


int* getArrayInput(int& size) {
    std::cout << "Enter the size of the array: ";
    std::cin >> size;

    int* arr = new int[size];
    std::cout << "Enter " << size << " integers: ";
    for(int i = 0; i < size; i++) {
        std::cin >> *(arr + i);
    }
    return arr;
}
 */



/*
 *  int temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (*(arr+j) > *(arr+(j + 1))) {
                temp = *(arr+j);
                *(arr+j) = *(arr+(j + 1));
                *(arr+(j + 1)) = temp;
            }
        }
    }

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





 */

/*
 int n =NULL;
 int *arr = input()






 std::cout << std::endl << "sorted array" << std::endl;

 output(arr, n);

*/




/*
    int n;
    char op;
    int *arr;

    std::cout << "enter the size of the array : ";
    std::cin >> n;
    std::cout << std::endl;


    /////////////// dynamic memory allocation

    arr = (int *) malloc(n * sizeof(int));


    /////////////// element input in the array

    std::cout << "enter the elements in the array" << std::endl;

    for (int i = 0; i < n; i++) {
        std::cout << "input for index " << i << " = ";
        std::cin >> arr[i];
    }
    std::cout << std::endl;


    int* arr = input(n);


    /////////////// output of the array

    std::cout << "entered array:"<<std::endl;
    std::cout << "{ ";
    for (int i = 0; i < n; i++) {

        std::cout << arr[i] << " ";
    }
    std::cout << "}";


    std::cout << std::endl;


    /////////////// bubble sort

    int *s_arr = bubbleSort(arr, n);


    /////////////// output of the array

    std::cout << "sorted array:\n";

    std::cout << "{ ";
    for (int i = 0; i < n; i++) {

        std::cout << s_arr[i] << " ";
    }
    std::cout << "}";


    oper(s_arr, n, op);
*/



//int ans;

/*
/////////////// operations function
void oper(int arr[], int n, char op);

int *bubbleSort(int arr[], int n);

int *realc(int arr[]);

int* input(int& n);
*/