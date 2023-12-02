#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int num;
    cout << "Input a number: ";
    cin >> num;
    cout << "\n\n"
    << "Number\t\t|\tSquare\t\t|\tSquare Root\t| Fourth Power\t|\n";
    for (float i = 0; i <= num; i++)
    {
        printf("%g\t\t|\t%g\t\t|\t%g\t\t|\t%g\t|\n", i, pow(i,2), sqrt(i), pow(i,4));
    }
    
}