#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int count;
    cout << "Input a number: ";
    cin >> count;
    for (size_t i = count-1; i > 0; i--)
    {
        count *= i;
    }
    cout << "Answer: " << count;
    
}