#include <iostream>
#include <ctime>

class testClass {       // Object
public:     // Public Access Modifier
    std::string name = "XYZ";       // Attribute 1    // here "XYZ" is globally defined attribute (defining global values is optional)
    std::string occupation = "NONE";  // Attribute 2    // here "NONE" is globally defined attribute (defining global values is optional)

    static void method1() {     // Methods (works as functions)
        std::cout << "this is the first method" << std::endl;

        int age = 10;
        int *ptr1 = &age;

        std::cout << *ptr1 << std::endl;
    }

    void method2() {
        std::cout << "this is the second method" << std::endl;
    }
};

int main() {

    testClass testObject;       // creating Objects in main function using a class

    testObject.name = "kanishk";        // storing values in objects (it will overwrite global values defined in a class)
    testObject.occupation = "developer";

    testClass::method1();       // invoking defined methods (way 1: [ className:: ]) -->> used only for static defined methods
    testObject.method2();       // invoking defined methods (way 2: [ objectName. ])


    srand(time(0));
    int r_time = rand() % 100;

    int *ptr2 = new int;
    *ptr2 = r_time;
    std::cout << *ptr2 << std::endl;
    delete ptr2;

    int age = 10;
    int *ptr = &age;
}
