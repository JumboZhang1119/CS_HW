#include<bits/stdc++.h>
using namespace std;

int main() {
    string ins, s;
    cout << "Input:" << endl;
    getline(cin, s);
    while (s != "-1") {
        stringstream ss(s);
        vector<string> vec;
        while (ss >> ins) {
            bool isDigit = 1;
            for (int i = 0; i < ins.length(); i++) {
                if (!isdigit(ins[i])) {
                    vec.push_back(ins);
                    isDigit = 0;
                    break;
                }
            }
            if (isDigit) {
                string s = "";
                for (int i = 0; i < ins.length(); i++) {
                    s += 'x';
                }
                vec.push_back(s);
            } 
        }
        cout << "Output:" << endl;
        cout << vec[0];
        for (int i = 1; i < vec.size(); i++) {
            cout << " " << vec[i];
        }
        cout << endl << endl;
        cout << "Input:" << endl;
        getline(cin, s);
    }
    return 0;
}