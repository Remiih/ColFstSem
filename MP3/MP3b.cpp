#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float liter, gallon, quarts;
    cout << "Input value in gallons\t      : ";
    cin >> gallon;
    cout << "The converted value in liters : " << (liter = gallon*3.785);
    cout << "\nThe converted value in quarts : " << (quarts = gallon * 4);
}