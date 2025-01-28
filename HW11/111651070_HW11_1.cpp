#include <bits/stdc++.h>
using namespace std;

vector<string> split(string s, string d) {
    vector<string> vec;
    string str = "";
    int i;
    for (i = 0; i <= s.length() - d.length(); i++) {
        if ((d == s.substr(i, d.length())) && (str != "")) {
            vec.push_back(str);
            str = "";
        }
        else str += s[i];
    }
    if (i < s.length()) str += s.substr(i, s.length()-i);
    vec.push_back(str);
    return vec;
}

int main() {
    string s, d;
    vector<string> vec;
    ifstream in1;
    ofstream out1;
    in1.open("input1.txt");
    out1.open("output1.txt");
    in1 >> s >> d;
    vec = split(s, d);
    for (int i = 0; i < vec.size(); i++) {
        out1 << i << " : " << vec[i] << endl;
    }
    return 0;
}