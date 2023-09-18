#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float sA, sB, sC, area, side;
    cout << "Input Side A: ";
    cin >> sA;
    cout << "Input side B: ";
    cin >> sB;
    cout << "Input side C: ";
    cin >> sC;
    side = (sA + sB + sC)/2;
    cout << "Side: " << side << "\n\n\n"
    << "The area of a triangle is: " << (area = sqrt(side*(side - sA)*(side - sB)*(side - sC)));
}