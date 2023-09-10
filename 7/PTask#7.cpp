#include <iostream>

using namespace std;

int main()
{
    int seconds, minutes;
    cout << "Input time in seconds: ";
    cin >> seconds;
    cout << "\nThe time in minute(s) is: " << seconds/60 << " minutes";
    cout << "\nThe time in second(s) is: " << seconds%60 << " seconds";

}