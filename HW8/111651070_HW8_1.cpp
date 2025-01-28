#include<bits/stdc++.h>
using namespace std;

int main() {
    ifstream in1;
    in1.open("input1.txt");
    string ins, s, a;
    stringstream ss;
    getline(cin, ins);
    while (ins != "12345") {
        srand(time(NULL));
        if (in1.eof()) {
            in1.clear();
            in1.seekg(0, ios::beg);
        }
        getline(in1, s);
        ss << s;
        if (!ss.eof()) {
            ss >> a;
            cout << a;
        }
        while(!ss.eof()) {
            ss >> a;
            if (a == "#N") cout << " " << rand()%99 + 1;
            else if (a == "#N.") cout << " " << rand()%99 + 1 << ".";
            else cout << " " << a;
        }
        cout << endl;
        ss.str("");
        ss.clear();
        getline(cin, ins);
    }
    in1.close();
    return 0;
}