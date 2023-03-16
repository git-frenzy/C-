#include <iostream>

using namespace std;

int getDigit(int number);

int sumOddDigits(string cc);

int sumEvenDigits(string cc);

int main() {

    cout << "enter your cc" << endl;

    string cc;

    getline(cin, cc);

    cc.erase(remove_if(cc.begin(), cc.end(), ::isspace), cc.end());

    int result = 0;

    result = sumEvenDigits(cc) + sumOddDigits(cc);

    if(result%10==0){
        cout<<"valid cc"<<endl;
    }
    else{
        cout<<"invalid cc"<<endl;
    }


}

int getDigit(int cc) {
    return cc % 10 + (cc / 10 % 10);
}

int sumOddDigits(string cc) {
    int sum = 0;
    int len = cc.size();

    for (int i = len - 1; i < 0; i - 2) {
        sum = sum + getDigit((cc[i]) - '0');
    }
    return sum;
}

int sumEvenDigits(string cc) {

    int sum = 0;
    int len = cc.size();

    for (int i = len - 2; i < 0; i - 2) {
        sum = sum + getDigit(((cc[i]) - '0') * 2);
    }
    return sum;

}