#include<bits/stdc++.h>
using namespace std;

int main() {
    ifstream in;
    in.open("input1.txt");
    int l;
    string s;
    cout << "How many lines do you want to see :";
    cin >> l;
    while (l) {
        for (int i = 0; i < l; i++) {
            if (getline(in, s)) cout << s << endl;
            else return 0;
        }
        if (in.eof()) return 0;
        cout << "How many lines do you want to see :";
        cin >> l;
    }
    in.close();
    return 0;
}