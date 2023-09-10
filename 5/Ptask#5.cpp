#include <iostream>

using namespace std;

int main()
{
    float length, width, Area, Perimeter, inch, feet, meter;
    cout << "Enter length: ";
    cin >> length;
    cout << "\nEnter Width: ";
    cin >> width;
    inch = 2.54;
    feet = 30.48;
    meter = 99.9744;
    Area = length * width;
    Perimeter = 2*length + 2 * width;
    cout << "Area of a square:\n" << Area << " sq. cm.\n" << Area/inch 
    << " sq. in.\n" << Area/feet << " sq. ft.\n" << Area/meter << " sq. m.\n\n";
    cout << "Perimeter of a square:\n" << Perimeter << " sq. cm.\n" << Perimeter/inch 
    << " sq. in.\n" << Perimeter/feet << " sq. ft.\n" << Perimeter/meter << " sq. m.";
}