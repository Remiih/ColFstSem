#include <iostream>

using namespace std;

int main()
{
    float loan, rate, payment;
    int count = 0;
    cout << "Loan: ";
    cin >> loan;
    cout << "Rate: ";
    cin >> rate;
    rate /= 100;
    cout << "Payment: ";
    cin >> payment;
    cout << "\n\nYear\t\tPrincipal\tInterest\tPayment\n";
    while (payment <= loan)
    {
        printf("%d\t\t%g\t\t%g\t\t%g\n", count++, loan, rate*loan, payment);
        loan += rate*loan;
        loan -= payment;
    }
    printf("%d\t\t%g\t\t%g\t\t%g", count++, loan, rate*loan, rate*loan+loan);
    
}