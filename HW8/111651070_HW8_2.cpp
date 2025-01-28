#include<bits/stdc++.h>
using namespace std;

int main() {
    ifstream in;
    ofstream out;
    in.open("input2.txt");
    out.open("output2.txt");
    stringstream ss;
    string s, a;
    int num = 1;
    while (!in.eof()) {
        getline(in, s);
        if (!s.length()) continue;
        ss << s;
        cout << setw(3) << num << " :";
        out << setw(3) << num++ << " :";
        while (ss >> a) {
            
            cout << " " << a;
            out << " " << a;
        }
        cout << endl;
        out << endl;
        ss.str("");
        ss.clear();
    }
    in.close();
    out.close();
    return 0;
}