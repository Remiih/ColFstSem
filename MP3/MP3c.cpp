#include <iostream>

using namespace std;

int main()
{
    float hp, W, KW, ftlbs, j;

    cout << "Input value in Horse Power (hp)\t\t\t\t : ";
    cin >> hp;
    cout << "\n\n\nThe converted value in Watt (W)\t\t\t\t : " << (W = hp / 1.3414);
    cout << "\nThe converted value in Kilo Watt (KW)\t\t\t : " << (KW = W / 1000);
    cout << "\nThe converted value in Feet-pounds per second (ft-lbs/s) : " << (ftlbs = W * 0.7376);
    cout << "\n The converted value in Joules per Second (j/s)\t\t : " << (j = W);
}