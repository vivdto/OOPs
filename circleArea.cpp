#include<bits/stdc++.h>
using namespace std;

class Circle {
public:
    double radius;

    double compute_area() {
        return 3.14 * radius * radius;
    }
};

int main () {

    Circle obj;
    float rad;

    // Interview Question: What is the purpose of the Circle class?
    // Answer: The Circle class is designed to represent circles and perform operations related to circles, such as computing their area.

    // Interview Question: What does the radius member variable represent in the Circle class?
    // Answer: The radius member variable represents the radius of the circle.

    // Interview Question: How is the area of a circle computed in the compute_area() function?
    // Answer: The area of a circle is computed using the formula: area = π * radius^2, where π is a mathematical constant (approximately 3.14).

    // Interview Question: Why is the compute_area() function declared as a member function of the Circle class?
    // Answer: Declaring compute_area() as a member function allows it to directly access the radius member variable of the Circle object, enabling it to compute the area of that specific circle.

    // Interview Question: How does the main function utilize the Circle class?
    // Answer: The main function creates a Circle object, allows the user to input the radius of the circle, assigns the input radius to the Circle object, and then computes and prints the area of the circle.

    // Interview Question: Can the radius of the Circle object be accessed directly from outside the class?
    // Answer: Yes, the radius member variable is declared as public, allowing it to be accessed and modified directly from outside the class.

    cin >> rad;

    obj.radius = rad;
    cout << obj.radius << endl;

    cout << obj.compute_area();

    return 0;
}