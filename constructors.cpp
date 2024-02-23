#include <iostream>

class MyClass {
public:
    // Constructor with no parameters
    MyClass() {
        std::cout << "Constructor called!" << std::endl;
    }

    // Constructor with parameter
    MyClass(int x) {
        std::cout << "Constructor with parameter called! Parameter: " << x << std::endl;
    }
    // Constructor with parameter
};

int main() {
    // Creating objects of MyClass
    MyClass obj1;          // Constructor without parameters is called
    MyClass obj2(10);      // Constructor with parameter is called

    return 0;
}





/* Constructor is a member function of a class that initializes objects of a class. In C++, Constructor is automatically called when an object (instance of the class) is created. It is a special member function of the class.

How constructors are different from a normal member function?


A constructor differs from member-functions in the following ways:

Constructor has the same name as the Class itself.
Constructors don’t have a return type.
A Constructor is automatically called when an object is created.
If we do not specify a constructor, 

C++ compiler generates a default constructor for us (expects no parameters and has an empty body).


Default Constructor


It is not mandatory for the programmer to write a constructor for each class. C++ by default provides a default constructors with no parameters, and no statements for the body. Much like being:

Employee() {}   //as per our example








*/

