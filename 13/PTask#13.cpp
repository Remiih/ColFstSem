#include <iostream>

using namespace std;

int main()
{
    int num;
    cout << "Enter a whole number: ";
    cin >> num;
    cout << ((num < 10) ? "Number read is less than 10" : (num == 10) ?  "Number read is 10" : (num < 100) ? "Number read is greater than 10" : (num == 100) ? "Number read is 100" : "Number is greater than 100");
}