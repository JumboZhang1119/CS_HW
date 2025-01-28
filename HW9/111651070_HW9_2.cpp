#include<bits/stdc++.h>
using namespace std;

int main() {
    string A, B;
    ifstream in;
    in.open("input2.txt");
    in >> A >> B;
    while (!(A == "0" && B == "0")) {
        vector<int> vecA(20, 0);
        vector<int> vecB(20, 0);
        vector<int> vec(20, 0);
        for (int i = 0; i < A.length(); i++) {
            vecA[19-i] = A[A.length()-1-i] - 48;
        }
        for (int i = 0; i < B.length(); i++) {
            vecB[19-i] = B[B.length()-1-i] - 48;
        }
        for (int i = 19; i > 0; i--) {
            vec[i] += vecA[i] + vecB[i];
            vec[i-1] += vec[i] / 10;
            vec[i] %= 10;
        }
        vec[0] += vecA[0] + vecB[0];
        if (vec[0]/10) cout << "Overflow!" << endl;
        else {
            int is0 = 1;
            cout << "A + B = ";
            for (int i = 0; i < 20; i++) {
                if (vec[i]) is0 = 0;
                if (!is0) {
                    cout << vec[i];
                }
            }
            cout << endl;
        }
        in >> A >> B;
    }
    return 0;
}