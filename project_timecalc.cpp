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
    int input = 0;
    int seconds = 0;
    int minutes = 0;
    //I
    cout << "Enter seconds: ";
    cin >> input;
    //P
    minutes = input / 60;
    seconds = input % 60;
    //0
    cout << "Minutes: " << minutes << "Seconds: " << seconds << endl;
    return 0;
}
