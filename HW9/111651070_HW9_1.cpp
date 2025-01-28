#include<bits/stdc++.h>
using namespace std;

double calculate_sd(vector<double>& vec, int N) {
    double avg, std = 0;
    avg = accumulate(vec.begin(), vec.end(), 0.0) / N;
    for (int i = 0; i < N; i++) {
        std += pow(vec[i]-avg, 2);
    }
    return sqrt(std / N);
}

int main() {
    ifstream in;
    in.open("input1.txt");
    int N;
    in >> N;
    while (N) {
        vector<double> vec(N, 0);
        for (int i = 0; i < N; i++) {
            in >> vec[i];
        }
        cout << fixed << setprecision(2) << calculate_sd(vec, N) << endl;
        in >> N;
    }
    return 0;
}