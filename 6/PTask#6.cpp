#include <iostream>

using namespace std;

int main()
{
    string itemCode;
    int numItem;
    float itemPrice;
    cout << "Input Item Code: ";
    cin >> itemCode;
    cout << "Input No. of Items: ";
    cin >> numItem;
    cout << "Input Item Price: ";
    cin >> itemPrice;
    float total = itemPrice*numItem;
    cout << "Item Code\t\tNo. of Item\t\tItem Price\t\tTotal\n"
    << itemCode << "\t\t\t" << numItem << "\t\t\t" << itemPrice <<"\t\t\t" << total;
    cout << "\n\nVat 6%: " << total*.06 << "\nTotal Cost: " << total*1.06;
    float amountTendered;
    cout << "\nAmount Tendered: ";
    cin >> amountTendered;
    cout << "Amount Change: " << amountTendered - total*1.06;
}