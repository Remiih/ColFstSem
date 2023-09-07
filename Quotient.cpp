// ORIGINAL CODE

// #include<iostream>
// using namespace std;
// int main()
// {

// int FirstNumber, SecondNumber;
// int Quotient = 0;
// cout<<"Enter First Number: ";
// cin>>FirstNumber;
// cout<<"Enter Second Number: ";
// cin>>SecondNumber;
// //Compute for the Quotient
// Quotient = FirstNumber / SecondNumber;
// cout<<"The Quotient is: ";
// cout<<Quotient;
// cout<<"\n";

// return 0;

// }

#include <iostream>
using namespace std;
int main()
{
    // I changed the data type to float so it will compute properly and not round it
    // to whole numbers
    float FirstNumber, SecondNumber;
    float Quotient = 0;
    // The rest should be the same
    cout << "Enter First Number: ";
    cin >> FirstNumber;
    cout << "Enter Second Number: ";
    cin >> SecondNumber;
    // Compute for the Quotient
    Quotient = FirstNumber / SecondNumber;
    cout << "The Quotient is: ";
    cout << Quotient;
    cout << "\n";

    return 0;
}