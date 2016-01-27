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
    int digits = 0.0;
    int modulatedRemainder = 0.0;
    int firstDigit = 0.0;
    int secondDigit = 0.0;
    int thirdDigit = 0.0;
    int totalDigits = 0.0;
    //I
    cout << "Enter a number between 0 and 999: ";
    cin >> digits;
    //P
    // first digit
    modulatedRemainder = digits % 10;
    firstDigit = modulatedRemainder;
    // divide by ten
    digits = (digits - modulatedRemainder)/10;
    // second digit
    modulatedRemainder = digits % 10;
    secondDigit = modulatedRemainder;
    // divide by ten
    digits = (digits - modulatedRemainder)/10;
    // third digit; we should be down to a single digit, no math needed
    thirdDigit = digits;
    // add up the tally of digits collected
    totalDigits = firstDigit + secondDigit + thirdDigit;
    //0
    cout << "Total: " << totalDigits << endl;
    return 0;
}
