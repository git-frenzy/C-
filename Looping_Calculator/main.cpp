#include <iostream>

void operations();
bool flag = false;

int main() {
    std::cout << "Welcome to the calculator" << std::endl;
    operations();
}

void sum(double n1, double n2) {
    std::cout << std::endl;
    std::cout << n1 << " + " << n2 << " = " << n1 + n2 << std::endl;
    std::cout << std::endl;
    operations();
}

void dif(double n1, double n2) {
    std::cout << std::endl;
    std::cout << n1 << " - " << n2 << " = " << n1 - n2 << std::endl;
    std::cout << std::endl;
    operations();
}

void mul(double n1, double n2) {
    std::cout << std::endl;
    std::cout << n1 << " * " << n2 << " = " << n1 * n2 << std::endl;
    std::cout << std::endl;
    operations();
}

void divi(double n1, double n2) {
    std::cout << std::endl;
    std::cout << n1 << " / " << n2 << " = " << n1 / n2 << std::endl;
    std::cout << std::endl;
    operations();
}

void mod(int n1, int n2) {
    std::cout << std::endl;
    std::cout << n1 << " % " << n2 << " = " << n1 % n2 << std::endl;
    std::cout << std::endl;
    operations();
}

void exit() {
    std::cout << std::endl;
    std::cout << "exited!" << std::endl;
}

void operations() {
    double n1, n2;
    char op;


    std::cout << "choose your operator (+,-,*,/,%)" << std::endl;
    if (flag) {
        std::cout << "or press x to exit" << std::endl;
    }
    std::cin >> op;


    /*
    int length = sizeof(op)/sizeof(char);
    std::cout<<length<<std::endl;
        if (length!=1){
    }
    */


    if (op == 'x') {
        exit();

    } else if (op == '+' || op == '-' || op == '*' || op == '/' || op == '%') {
        flag=true;

        std::cout << "enter first number:" << std::endl;
        std::cin >> n1;

        std::cout << "enter second number:" << std::endl;
        std::cin >> n2;

        if (op == '+') {
            sum(n1, n2);
            flag=true;
        } else if (op == '-') {
            dif(n1, n2);
        } else if (op == '*') {
            mul(n1, n2);
            flag=true;
        } else if (op == '/') {
            divi(n1, n2);
            flag=true;
        } else if (op == '%') {
            mod(n1, n2);
            flag=true;
        } else {
            std::cout << "invalid operation" << std::endl;
            operations();
        }
    } else {
        std::cout << "invalid operation" << std::endl;
        operations();
    }
}