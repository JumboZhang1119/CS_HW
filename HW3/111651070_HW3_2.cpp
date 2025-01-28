#include<bits/stdc++.h>
using namespace std;

char prs(char A, char B) {
    if (A == 'p' || A == 'P') {
        if (B == 'p' || B == 'P') return 'C';
        if (B == 's' || B == 'S') return 'B';
        if (B == 'r' || B == 'R') return 'A';
    }
    else if (A == 's' || A == 'S') {
        if (B == 'p' || B == 'P') return 'A';
        if (B == 's' || B == 'S') return 'C';
        if (B == 'r' || B == 'R') return 'B';
    }
    else if (A == 'r' || A == 'R') {
        if (B == 'p' || B == 'P') return 'B';
        if (B == 's' || B == 'S') return 'A';
        if (B == 'r' || B == 'R') return 'C';
    }
    return 'D';
}


int main() {
    string finput;
    char A, B, res;
    cout << "Paper-rock-scissor :";
    cin >> finput;
    while (finput != "done") {
        A = finput[0];
        cin >> B;
        res = prs(A, B);
        if (res == 'A') cout << "User 1 wins !" << endl;
        else if (res == 'B') cout << "User 2 wins !" << endl;
        else if (res == 'C') cout << "Tie !" << endl;
        else cout << "Error input !" << endl;
        cout << "Paper-rock-scissor :";
        cin >> finput;
    }
    return 0;
    

}