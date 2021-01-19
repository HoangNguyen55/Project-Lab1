#include <iostream>
using namespace std;

double pay, rate, hours;

int main()
{
    cout << "How many hours did you work?\n";
    cin >> hours;
    cout << "How much do you get paid per hour?\n";
    cin >> rate;

    pay = rate*hours;
    cout << "Your total pay is " << pay;
    return 0;
}