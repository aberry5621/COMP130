//File: project_sum_integer_digits.cpp
//Name: Alex Berry
//Date: 01/26/2016
//Purpose: Sum the digits of an integer
// and time
#include <iostream>
using namespace std;
int main()
{
    // numberic data var
    int initialNumber = 0.0;
    int secondaryNumber = 0.0;
    int tertiaryNumber = 0.0;
    int modulatedRemainder = 0.0;
    int modulatedNumber = 0.0;
    int decimatedNumber = 0.0;
    int firstDigit = 0.0;
    int secondDigit = 0.0;
    int thirdDigit = 0.0;
    int totalDigits = 0.0;

    //I
    cout << "Enter a number between 0 and 1000: ";
    cin >> initialNumber;
    //P
    modulatedRemainder = initialNumber % 10;
    cout << "modulatedRemainder readout: " << modulatedRemainder << endl;
    firstDigit = modulatedRemainder;
    cout << "firstDigit readout: " << firstDigit << endl;
    decimatedNumber = (initialNumber - modulatedRemainder)/10;
    cout << "decimatedNumber readout: " << decimatedNumber << endl;

    modulatedRemainder = decimatedNumber % 10;
    cout << "modulatedRemainder 2 readout: " << modulatedRemainder << endl;
    secondDigit = modulatedRemainder;
    cout << "secondDigit readout: " << secondDigit << endl;
    secondaryNumber = decimatedNumber - modulatedRemainder;
    cout << "secondaryNumber readout: " << secondaryNumber << endl;
    thirdDigit = secondaryNumber/10;
    cout << "thirdDigit readout: " << thirdDigit << endl;
    totalDigits = firstDigit + secondDigit + thirdDigit;
    //0
    cout << "Total: " << totalDigits << endl;
    return 0;
}
