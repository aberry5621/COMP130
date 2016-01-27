//File: project_scrathpad.cpp
//Name: Alex Berry
//Date: 01/26/2016
//Purpose: Basic cpp file for scratch tests
#include <iostream>
using namespace std;
#include <cmath>
int main()
{
    // numberic data var
    int seconds = 0.0;
    int modulod = 0.0;
    //I
    cout << "Enter seconds: ";
    cin >> seconds;
    //P
    modulod = seconds % 5;
    //0
    cout << "Modulod number is: " << modulod << endl;
    return 0;
}
