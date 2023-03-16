#include <iostream>

using namespace std;

int main() {
    int n;

    cout << "enter the size of array" << endl;
    cin >> n;

    int *ptr = (int *) malloc(n * sizeof(int));

    for (int i = 0; i < n; i++) {
        cout << "enter the element for index " << (i) << "  ";
        cin >> *(ptr + i);
    }
    for (int i = 0; i < n; i++) {
        cout << *(ptr + i) << endl;
    }



    for (int i = 0; i < n; i++) {
        cout<<"pointer to array\n";
        cout << ptr[i]<<endl;
    }

}
