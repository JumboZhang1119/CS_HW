#include<bits/stdc++.h>
using namespace std;

void computeCoins(int coinValue, int& num, int& amountLeft) {
    num = amountLeft / coinValue;
    amountLeft -= coinValue * num;
    return;
}


int main() {
    int q, d, p, amountLeft, num;
    cout << "Please enter the amount of change: ";
    cin >> amountLeft;
    while (amountLeft) {
        cout << amountLeft << " cent(s) = ";
        computeCoins(25, q, amountLeft);
        computeCoins(10, d, amountLeft);
        p = amountLeft;
        cout << q << " quarter(s) + " << d << " dime(s) + " << p << " penny(pennies)" << endl;
        cout << "Please enter the amount of change: ";
        cin >> amountLeft;
    }
    return 0;
}