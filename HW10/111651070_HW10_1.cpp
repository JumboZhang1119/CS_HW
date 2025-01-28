#include<bits/stdc++.h>
using namespace std;

bool checkEMPTY(vector<vector<char> >& vec) {
    for (int i = 0; i < 7; i++) {
        for (int j = 1; j < 5; j++) {
            if (vec[i][j] != 'X') {
                return 0;
            }
        }
    }
    return 1;
}

int main() {
    ifstream in;
    ofstream out;
    string pos;
    in.open("input1_1.txt");
    out.open("output1.txt");
    vector<vector<char> > vec(7, vector<char>(5, '0'));
    for (int i = 0; i < 7; i++) {
        vec[i][0] = static_cast<char>('0' + i + 1);
        for (int j = 0; j < 4; j++) {
            vec[i][j+1] = static_cast<char>('A' + j);
        }
    }
    for (int i = 0; i < 7; i++) {
        out << vec[i][0];
        for (int j = 1; j < 5; j++) {
            out << " " << vec[i][j];
        }
        out << endl;
    }
    out << endl;
    while ((!in.eof()) && (!checkEMPTY(vec))) {
        out << "Please choose a seat: ";
        in >> pos;
        out << pos << endl;
        if (pos == "END") {
            out << "End of choosing the seat.";
            return 0;
        }
        else {
            int row, col;
            row = static_cast<int>(pos[0] - '0') - 1;
            col = static_cast<int>(pos[1] - 'A') + 1;
            if (vec[row][col] != 'X') {
                vec[row][col] = 'X';
                for (int i = 0; i < 7; i++) {
                    out << vec[i][0];
                    for (int j = 1; j < 5; j++) {
                        out << " " << vec[i][j];
                    }
                    out << endl;
                }
            }
            else out << "The seat is already occupied, please choose another seat." << endl;
            out << endl;
        }
    }
    out << "All seats are occupied!";
    return 0;
    
}