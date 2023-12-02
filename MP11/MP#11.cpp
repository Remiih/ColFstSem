#include <iostream>

using namespace std;

int main()
{
    int count;
    cout << "Input number: ";
    cin >> count;
    for (size_t i = 1; i <= count; i++)
    {
        for (size_t k = 1; k <= count; k++)
        {
            printf("%d\t|", i*k);
        }
        cout << "\n";
    }
    
}