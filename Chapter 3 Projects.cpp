
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
      //initializes variables given in the problem as well as a variable to store desired number of cookies
    const float SUGAR = 1.5;
    const float BUTTER = 1;
    const float FLOUR = 2.75;
    float count; 
      //asks user for number of desired cookies and stores it
    cout << "How many cookies would you like to bake?\n\n";
    cin >> count;
      //calculates the change in disired cookies from the original 48 cookies the original recepie 
    float countChange = static_cast<float>(count) / 48;
      //outputs the information
    cout << "\nCookie Recipe\n" << "--------------------\n";
    cout << setprecision(3);
    cout << SUGAR * countChange << " cups of sugar\n\n";
    cout << BUTTER * countChange << " cups of butter\n\n";
    cout << FLOUR * countChange << " cups of flour\n\n";
}

