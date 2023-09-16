#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float a, b, hypotenuse;
    cout << "This program computes for the hypotenuse of a right triangle using the Pythagorean Theorem\n\n"
            "Input the length of side a: ";
    cin >> a;
    cout << "Input the length of side b: ";
    cin >> b;
    hypotenuse = hypot(a,b);
    cout << "Hypotenuse: " << hypotenuse;
            

}