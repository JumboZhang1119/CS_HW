#include<bits/stdc++.h>
using namespace std;

int main() {
    double hours, dep, pay, sst, fit, sit, ud, hi, Npay;
    char again;
    do{
        cout << "############### Paid Calculator ###############" << endl;
        cout << "Enter the number of hours worked in a week: ";
        cin >> hours;
        cout << "Enter the number of dependents: ";
        cin >> dep;
        if (hours > 40) pay = 671.2 + (hours-40)*25.17;
        else pay = hours*16.78;
        sst = pay*0.06;
        fit = pay*0.14;
        sit = pay*0.05;
        cout << "Gross Pay: $" << pay << endl;
        cout << "Social Security Tax: $" << sst << endl;
        cout << "Federal Income Tax: $" << fit << endl;
        cout << "State Income Tax: $" << sit << endl;
        cout << "Union Dues: $10" << endl;
        if (dep >= 3) {
            hi = 35;
            cout << "Health Insurance: $" << hi << endl;
        }
        else hi = 0;
        Npay = pay - sst - fit - sit - 10 - hi;
        if (Npay < 0) cout << "Net Take-Home Pay: -$" << (-1)*Npay << endl;
        else cout << "Net Take-Home Pay: $" << Npay << endl;;
        cout << "###############################################" << endl;
        cout << "Do you want to calculate again? (yY/nN): ";
        cin >> again;
    } while(again == 'y' || again == 'Y');
    cout << "Thanks for using the Paid Calculator, Bye";
}