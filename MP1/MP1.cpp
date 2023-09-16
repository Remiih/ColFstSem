#include <iostream>

using namespace std;

int main()
{
    float circumference, diameter, radius;
    const float pi = 3.1416;
    cout << "This program computes for the circumference and diameter of a circle\n\n";
    cout << "Input radius\t\t\t : ";
    cin >> radius;
    cout << "The circumference of a circle is : " << (circumference=2*pi*radius);
    cout << "\nThe diameter of a circle is\t : " << (diameter=2*radius);
}