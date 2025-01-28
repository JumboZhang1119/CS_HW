#include<bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c, p;
    cout << "Enter three integer numbers: ";
    cin >> a >> b >> c;
    if (a > b) {
        p = a;
        a = b;
        b = p;
    }
    if (b > c) {
        p = b;
        b = c;
        c = p;
    }
    if (a > b) {
        p = a;
        a = b;
        b = p;
    }
    cout << "Numbers in ascending order: " << a << " " << b << " " << c;
    return 0;
}
