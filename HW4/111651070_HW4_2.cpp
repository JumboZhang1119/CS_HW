#include <bits/stdc++.h>
using namespace std;

int main() {
    int n = 1023;
    int a, b, c, d;
    while (n < 9876) {
        a = n / 1000;
        b = (n % 1000) / 100;
        c = (n % 100) / 10;
        d = (n % 10);
        n += 2;
        if (a == b || a == c || a == d || b == c || b == d || c == d) continue;
        if (a != c*3) continue;
        if (a + b + c + d != 27) continue;
        cout << n - 2 << endl;
    }
    return 0;
}