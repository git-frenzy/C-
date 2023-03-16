#include <iostream>
#include <cmath>

using namespace std;

int main() {

    cout << "welcome to the calculator" << endl;
    cout << "choose your operator (+,-,*,/,%) or x to exit" << endl;

    char op;
    cin >> op;
    double n1, n2, ans;
    int n3, n4;

    cout << "enter first number" << endl;
    cin >> n1;

    cout << "enter second number" << endl;
    cin >> n2;

    switch (op) {
        case '+':
            ans = n1 + n2;
            break;
        case '-':
            ans = n1 - n2;
            break;
        case 'x':
            ans = n1 * n2;
            break;
        case '*':
            ans = n1 * n2;
            break;
        case '/':
            ans = n1 / n2;
            break;
        case '%':
            n3 = round((int) n1);
            n4 = round((int) n2);
            ans = n3 % n4;
            break;

        default:
            cout << "Invalid operation!";
            break;
    }

    cout << ans << endl;




}
int operations(){

}