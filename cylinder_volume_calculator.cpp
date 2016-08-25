//File: cylinder_volume_calculator.cpp
//Name: Alex Berry
//Date: 08/24/2016
//Purpose: Calculate and display area and volume of a cylinder
#include <iostream>
using namespace std;
#include <cmath>

int main()
{
    double radius = 0.0;
    double length = 0.0;
    const double PI = 3.14159;
    double area = 0.0;
    double volume = 0.0;
    
    // I
    cout << "Enter the radius and length of a cylinder: ";
    cin >> radius >> length;
    // P
    area = pow(radius, 2.0) * PI;
    volume = area * length;
    // O
    cout << "The area is " << area << endl;
    cout << "The volume is " << volume << endl;
    return 0;
}
