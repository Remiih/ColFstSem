#include <iostream>

using namespace std;

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if (num%2==1) {
        cout << num << " is Odd";
    } else {
        cout << num << " is Even";
    }
}