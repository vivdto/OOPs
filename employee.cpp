/*
The syntax for class declaration is as:
class < class-name > {
< access-modifier >:
    //data-members
    //constructors
    //member-functions
    //destructors
};   //don't forget the semi-colon here !!

*/



#include <iostream> // Include necessary header for cout
#include <string>
using namespace std;

class Student {
public: // Access specifier to declare members as public

    string name, id;
    int roll_number;

    // Constructor to initialize member variables
    Student(int roll_number, string name, string id) {
        this->roll_number = roll_number; // 'this' pointer refers to the current object
        this->name = name; // Assigning parameter 'name' to member variable 'name'
        this->id = id; // Assigning parameter 'id' to member variable 'id'
    }

    // Member function to display student information
    void info() {
        cout << "Student " << this->name << this->roll_number << "is an LNCT Group Proud Alumni\n"; // Display student information
    }
};

int main() {
    // Create a Student object directly
    Student s1(1, "Vivashwat", "vivdto001");

    // Create a Student object dynamically using a pointer
    Student *s2 = new Student(2, "Anjali", "vivdto002");

    // Output information of the first student
    cout << "Student ID: " << s1.id << endl;
    cout << "Name: " << s1.name << endl;
    cout << "Roll Number: " << s1.roll_number << endl;

    // Call the info() method to display additional information about the first student
    s1.info();
    cout << endl;

    // Output information of the second student
    cout << "Student ID: " << s2->id << endl;
    cout << "Name: " << s2->name << endl;
    cout << "Roll Number: " << s2->roll_number << endl;

    // Call the info() method using the pointer to display additional information about the second student
    s2->info();

    // Deallocate memory for the dynamically allocated student object
    delete s2;

    return 0;
}

/*


Comments added from an object-oriented interview perspective:

Access Specifier: In C++, public, private, and protected are access specifiers used to control the access levels of the members of the class. Here, public is used to allow access to class members from outside the class.

Constructor: A constructor is a special member function of a class that is automatically called when an object of that class is created. It is used to initialize the member variables of the class.

this Pointer: The this pointer is a keyword in C++ that holds the address of the current object. It is used to access the members of the current object within member functions.

Member Functions: Member functions are functions that are defined within a class and operate on the class objects. They can access the class's private and protected members.

Dynamic Object Creation: Dynamic memory allocation is done using the new keyword in C++. It returns a pointer to the newly allocated memory. In the code provided, new is used to create a Student object dynamically.

Pointer Usage: Pointers are used to access dynamically allocated memory. Arrow operator (->) is used to access the members of an object through a pointer.

Memory Deallocation: Dynamically allocated memory should be deallocated using the delete keyword to prevent memory leaks.

These comments highlight key object-oriented programming concepts such as access specifiers, constructors, member functions, dynamic memory allocation, and pointers, which are commonly discussed in object-oriented interviews. Understanding these concepts is crucial for building robust and efficient object-oriented C++ programs.




Data Members -- are the identifiers that describe the characteristics and hold important data related to the class. 


In our Student class, we have id, name, roll_number as the data members. Data members can be anything from primitive data-types (int, char, double, etc.) to collections (arrays, strings, etc.) to user-defined data-types (structs, unions, even other class objects, etc.). Anything that can hold data value can be a data-member.

Member Functions/Methods -- are class-functions/methods which describe the behavior of the class. i.e. what kind of operation we can perform with objects of this class. e.g. 

In our Employee example, work() is a member function. Member functions in C++ can be defined inside/outside the class, however, it is mandatory to have prototype declaration inside the class if go for an outside-the-class definition. e.g.


<--------------------------------------------------------------------------->

#include <bits/stdc++.h> // This header includes most standard C++ libraries. However, it's generally advised to include only the necessary headers for better code efficiency.

using namespace std; // Using the standard namespace to simplify code writing.

class Employee {  // Class Declaration

public: // Access specifier for making class members accessible from outside the class.

    string id, name; // Member variables to store employee ID and name.
    int years;  // Member variable to store years of experience.

    // Constructor definition to initialize employee data.
    Employee(string id, string name, int years) {
        this->id = id; // 'this' pointer refers to the current object.
        this->name = name; // Assigning parameter 'name' to member variable 'name'.
        this->years = years; // Assigning parameter 'years' to member variable 'years'.
    }

    // Prototype declaration for a member function named 'work'.
    void work();
};

// Outside-class definition of the 'work' member function.
void Employee::work() {
    cout << "Employee: " << this->id << " is working\n"; // Displaying a message indicating that the employee is working.
}

int main() {
    // Class Instantiation (Direct)
    Employee emp("GFG123","John",3); // Creating an object of the Employee class with provided data.

    emp.work(); // Calling the 'work' member function for the employee object.
    return 0; // Indicating successful completion of the program.
}
Interview Perspective Comments:

Class Declaration: The Employee class is declared with member variables id, name, and years representing employee ID, name, and years of experience respectively. This is a typical structure in object-oriented programming, where classes are used to represent real-world entities.

Constructor: A constructor is defined to initialize the member variables of the class when an object is created. Constructors are crucial in object-oriented programming for object initialization.

Access Specifier: The public access specifier is used to allow access to class members from outside the class. This controls the visibility of class members, which is an important concept in encapsulation.

Member Function Declaration: The work member function is declared inside the class, indicating that objects of the class can perform this action. This demonstrates the concept of encapsulation, where data and methods are bundled together within a class.

Outside-class Member Function Definition: The work member function is defined outside the class using the scope resolution operator ::. This separates the declaration of the function from its definition, allowing for better organization of code.

Object Instantiation and Method Invocation: An object of the Employee class is instantiated in the main function, and the work member function is invoked for that object. This demonstrates the concept of object instantiation and method invocation, which are fundamental concepts in object-oriented programming.

Understanding these concepts is essential for object-oriented programming interviews as they showcase knowledge of class declaration, constructors, member functions, encapsulation, and object instantiation.

<---------------------------------------------------------------------------->




*/
