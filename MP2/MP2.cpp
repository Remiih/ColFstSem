#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float area, volume, radius;
    const float pi = 3.1416;
    cout << "This program computes for the surface area and volume of a sphere if the unit of the radius is in cm (centimeters)\n\n";
    cout << "Input radius\t\t\t  : ";
    cin >> radius;
    cout << "The surface area of a sphere is   : "<< (area=4*pi*pow(radius,2));
    cout << "\nThe volume of a sphere is\t  : "<< (volume=(4.0/3.0)*pi*pow(radius,3));
    
}