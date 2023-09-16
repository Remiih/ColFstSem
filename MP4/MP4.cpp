#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double number;
    cout << "ENTER A NUMBER:";
    cin >> number;
    cout << "\nNUMBER\t\t\tSine\t\t\tCOSINE\t\t\tTANGENT";
    cout << "\n"
         << number << "\t\t\t" << sin(number) << "\t\t" << cos(number) << "\t\t" << tan(number);
}