#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<string> names;
    vector<int> salaries;
    string name;
    int salary;
    char input;
    while (true)
    {
        cout << "Name of Employee: ";
        cin >> name;
        names.push_back(name);
        cout << "Salary: ";
        cin >> salary;
        salaries.push_back(salary);
        cout << "Done? (Y/N): ";
        cin >> input;
        if (toupper(input) == 'Y') {break;}
    }
    cout << "Name\t\tSalary\t\tBonus\n";
    for (int i = 0; i < names.size( ); i++)
    {
        cout << names[i] << "\t\t" << salaries[i] << "\t\t";
        if (salaries[i] <= 7000) {
            cout << salaries[i]*.5 << "\n";
            continue;
        } cout << "7000\n";
    }
    
}
