//File: project_20162101_a.cpp
//Name: Nikita Ryabchun and Alex Berry
//Date: 01/21/2016
//Purpose: To calculate and display Fahrenheit based on a Celcius input value
#include <iostream>
using namespace std;
int main()
{
    double celcius = 0.0;
    double fahrenheit = 0.0;
    //I
    cout << "Enter a degree in Celcius: ";
    cin >> celcius;
    //P
    fahrenheit = (9.0 / 5) * celcius + 32;
    //0
    cout << celcius << " Celcius is " << fahrenheit << " degrees Fahrenheit" << endl;
    return 0;
}
