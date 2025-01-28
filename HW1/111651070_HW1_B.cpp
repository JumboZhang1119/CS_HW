#include<bits/stdc++.h>
using namespace std;

int main() {
    int h, m, s, sum;
    do {
        cout << "Enter the hour of the day: ";
        cin >> h;
    } while (h < 0 || h > 23);
    do {
        cout << "Enter the minutes of the hour: ";
        cin >> m;
    } while (m < 0 || m > 59);
    do {
        cout << "Enter the seconds passed in the current minute: ";
        cin >> s;
    } while (s < 0 || s > 59);
    sum = h*3600 + m*60 + s;
    cout << "The time in seconds since midnight is: " << sum << endl;
    return 0;
}