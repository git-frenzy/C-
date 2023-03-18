#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int getDigit(char number);

int sumOddDigits(string cc);

int sumEvenDigits(string cc);

int main() {
    cout << "Enter your cc:" << endl;
    string cc;
    getline(cin, cc);
    cc.erase(remove_if(cc.begin(), cc.end(), ::isspace), cc.end());
    int result = sumEvenDigits(cc) + sumOddDigits(cc);
    if (cc.size() == 16 && result % 10 == 0) {
        cout << "Valid cc" << endl;
    } else {
        cout << "Invalid cc" << endl;
    }
}

int getDigit(char cc) {
    int num = cc - '0';
    return num % 10 + (num / 10 % 10);
}

int sumOddDigits(string cc) {
    int sum = 0;
    int len = cc.size();
    for (int i = len - 1; i >= 0; i--) {
        sum = sum + getDigit(cc[i]);
    }
    return sum;
}

int sumEvenDigits(string cc) {
    int sum = 0;
    int len = cc.size();
    for (int i = len - 2; i >= 0; i -= 2) {
        sum = sum + getDigit(cc[i] * 2);
    }
    return sum;
}
