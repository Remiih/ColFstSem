#include <iostream>

using namespace std;

int main()
{
    int roomNo, roomCap, students;
    cout << "Enter room number\t\t\t:\t";
    cin >> roomNo;
    cout << "Enter room capacity\t\t\t:\t";
    cin >> roomCap;
    cout << "Enter no. of students enrolled\t\t:\t";
    cin >> students;
    cout << "\n\n" << "Room No.\t\tCapacity\t\tEnrolled Students\t\tEmpty Seats\t\tStatus\n"
         << roomNo << "\t\t\t" << roomCap << "\t\t\t" << students << "\t\t\t\t" << (roomCap-students) << "\t\t\t" << ((roomCap <= students) ? "Closed" : "Available");
}