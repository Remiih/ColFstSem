#include <iostream>

using namespace std;

int main()
{
    float a, b, c;
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;
    cout << "Enter third number: ";
    cin >> c;
    cout << "The largest number is " << (((a > b),(a > c)) ? a : (b > c) ? b : c);
    cout << "\nThe smallest number is " << (((a < b),(a < c)) ? a : (b < c) ? b : c);
}