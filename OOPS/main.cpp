#include <iostream>

class testClass {       // Object
public:     // Public Access Modifier  (can be Public or Private)
    std::string name = "XYZ";       // Attribute 1    // here "XYZ" is globally defined attribute (defining global values is optional)
    std::string occupation = "NONE";  // Attribute 2    // here "NONE" is globally defined attribute (defining global values is optional)
    int age = 21;

    void static method1() {     // Methods (works as functions)
        std::cout << "this is the first method" << std::endl;
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

}
