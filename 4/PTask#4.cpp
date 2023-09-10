#include <iostream>

using namespace std;

int main()
{
    cout << "This program computes for the area of a rectangle and perimeter\n";
    float length, width, Area, Perimeter;
    cout << "Enter length: ";
    cin >> length;
    cout << "\nEnter Width: ";
    cin >> width;
    Area = length * width;
    Perimeter = 2 * (length + width);
    cout << "Area: " << Area << "\nPerimeter: " << Perimeter;
}