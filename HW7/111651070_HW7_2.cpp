#include<bits/stdc++.h>
using namespace std;

void wordLengthCal (ifstream& filein) {
    int word = 0, charc = 0;
    string s;
    while(filein >> s) {
        int l = 0;
        s += ",";
        for (int i = 0; i < s.length(); i++) {
            if ((s[i] == ',') || (s[i] == '.')) {
                if (l != i) {
                    word++;
                    charc += i - l;
                    l = i+1;
                }
                else l = i+1;
            }
        }
    }
    if (!word) cout << 0 << endl;
    else cout << static_cast<double>(charc)/word << endl;
    return;
}

int main() {
    ifstream in;
    in.open("input2.txt");
    wordLengthCal(in);
    return 0;
}