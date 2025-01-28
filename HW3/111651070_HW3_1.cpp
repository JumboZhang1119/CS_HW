#include<bits/stdc++.h>
using namespace std;

int main() {
    double N, intrest, intsum = 0;
    int m = 0;
    cout << "Enter loan :";
    cin >> N;
    N *= 100;
    while (N > 0){
        m++;
        intrest = ceil(N * 0.015);
        intsum += intrest;
        N -= (5000 - intrest);
    }
    cout << "How many months it will take you to pay off the loan: " << m << endl;
    cout << "The total amount of interest is: " << intsum/100 << endl;
    return 0;
}