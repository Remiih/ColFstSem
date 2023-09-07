#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    float firstNumber;
    float secondNumber;
    cout << "Input your first number: ";
    cin >> firstNumber;
    cout << "\nInput your second number: ";
    cin >> secondNumber;
    
    cout << "\nSum of the numbers: ";
    cout << setprecision(3) << (firstNumber+secondNumber) << endl;
    cout << "\nDifference of the numbers: ";
    cout << setprecision(3) << (firstNumber-secondNumber) << endl;
    cout << "\nProduct of the numbers: ";
    cout << setprecision(3) << (firstNumber*secondNumber) << endl;
    cout << "\nQuotient of the numbers: ";
    cout << setprecision(3) << (firstNumber/secondNumber) << endl;
    cout << "\nAverage of the numbers: ";
    cout << setprecision(3) << ((firstNumber+secondNumber)/2) << endl;
    return 0;
}