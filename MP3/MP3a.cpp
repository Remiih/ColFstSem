#include <iostream>

using namespace std;

int main()
{
    float celsius, fahrenheit;
    cout << "Input temperature in Fahrenheit\t\t: ";
    cin >> fahrenheit;
    cout << "\nThe converted temperature in Celsius is : " << (celsius = (float(5) / float(9)) * (fahrenheit - 32));
}