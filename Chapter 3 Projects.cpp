
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    float principal;
    float rate;
    int timesCompounded;
    float finalAmount;
    float intrestEarned;

    cout << "Please enter the prompted information to calculate \nthe balance of "
        "your savings account.\n\n";
    cout << setw(25) << left << "\nInterest Rate?:";
    cin >> rate;
    cout << setw(25) << "\nTimes Compounded:";
    cin >> timesCompounded;
    cout << setw(23) << "\nPrincipal:"
        << "$ ";
    cin >> principal;

    //makes the rate a percentage
    rate /= 100;

    //applies the given formula to the user input
    finalAmount =
        principal * pow((1 + (rate / timesCompounded)), timesCompounded);

    intrestEarned = finalAmount - principal;

    cout << setw(23) << "\nIntrest:" << "$ " << left << fixed << setprecision(2) << intrestEarned;

    cout << setw(24) << "\n\nAmount in savings:" << "$ " << left << finalAmount;
}

