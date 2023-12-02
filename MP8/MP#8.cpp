#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int count;
    int ans = 0;
    cout << "Input a number: ";
    cin >> count;
    for (size_t i = 0; i <= count; i++)
    {
        ans += pow(i,2);
    }
    cout << "Answer: " << ans;
    
}