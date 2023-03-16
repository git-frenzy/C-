#include <iostream>

using namespace std;

int func(int arr[], int len, int *min, int *max) {
    for (int i = 0; i < len; i++) {
        if (arr[i] < *min) {
            *min = arr[i];

        }
        if (arr[i] > *max) {
            *max = arr[i];
        }
    }
    return (*min, *max);

}

int main() {

    int arr[] = {1, 4, 6, 8, 31, 46};


    int min = arr[0];
    int max = arr[0];

    int len = sizeof(arr) / sizeof(arr[0]);

    func(arr, len, &min, &max);


    cout << min << endl;
    cout << max << endl;


}

