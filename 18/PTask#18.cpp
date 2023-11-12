#include <iostream>
#include <vector>
#include <cstdlib>

using namespace std;

int main()
{
    vector<string> oh{"","One", "Two", "Three", "Four", "Five",
    "Six", "Seven", "Eight", "Nine"};
    vector<string> teen{"", "eleven", "twelve", "thirteen", "fourteen",
    "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
    vector<string> ten{"", "ten", "twenty", "thirty", "forty", "fifty", "sixty",
     "seventy", "eighty", "ninety"};
    while (true) {
        int num, hundreds, tens, ones;
        cout << "Input a number between 0-999: ";
        cin >> num;
        hundreds = num-num%100;
        tens = num-hundreds-num%10;
        ones = num%10;
        cout << oh[hundreds/100] << (hundreds/100 ? " hundred " : "") 
        << (tens==10 && ones > 0 ? teen[ones] : ten[tens/10] + " " + oh[ones]) << "\n";
        system("pause");
        system("cls");
    }
}