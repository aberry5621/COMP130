//File: project_future_investment_value.cpp
//Name: Alex Berry
//Date: 01/26/2016
//Purpose: Determine future investment value of investments given interest rate
// and time
#include <iostream>
using namespace std;
#include <cmath>
int main()
{
    // numberic data var
    double investmentAmount = 0.0;
    double annualInterestRate = 0.0;
    double monthlyInterestRate = 0.0;
    double lengthOfInvestment = 0.0;
    double futureInvestmentValue = 0.0;
    double compoundValue = 0.0;
    //I
    cout << "Enter investment amount: ";
    cin >> investmentAmount;
    cout << "Enter annual interest rate: ";
    cin >> annualInterestRate;
    cout << "Enter length of investment (years): ";
    cin >> lengthOfInvestment;
    //P
    monthlyInterestRate = (annualInterestRate / 12)/100.00;
    compoundValue = lengthOfInvestment * 12;
    cout << "Monthly interest rate readout: " << monthlyInterestRate << endl;
    futureInvestmentValue = investmentAmount * pow(1 + monthlyInterestRate,compoundValue);
    //0
    cout << "Amount: " << investmentAmount << "AIR: " << annualInterestRate << "Length: " << lengthOfInvestment << endl;
    cout << "Accumulated value is: " << futureInvestmentValue << endl;
    return 0;
}
