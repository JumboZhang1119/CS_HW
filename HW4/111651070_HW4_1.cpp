#include<bits/stdc++.h>
using namespace std;

string horoscope(int m, int d) {
    switch (m) {
        case 3: if (d >= 21) return "Aries"; else return "Pisces";
        case 4: if (d >= 20) return "Taurus"; else return "Aries";
        case 5: if (d >= 21) return "Gemini"; else return "Taurus";
        case 6: if (d >= 22) return "Cancer"; else return "Gemini";
        case 7: if (d >= 23) return "Leo"; else return "Cancer";
        case 8: if (d >= 23) return "Virgo"; else return "Leo";
        case 9: if (d >= 23) return "Libra"; else return "Virgo";
        case 10: if (d >= 23) return "Scorpio"; else return "Libra";
        case 11: if (d >= 22) return "Sagittarius"; else return "Scorpio";
        case 12: if (d >= 22) return "Capricorn"; else return "Sagittarius";
        case 1: if (d >= 20) return "Aquarius"; else return "Capricorn";
        case 2: if (d >= 19) return "Pisces"; else return "Aquarius";
    }
    return "N";
}

int stom(string s) {
    int m;
    s = s.substr(1, 2);
    if (s == "an") m = 1;
    else if (s == "eb") m = 2;
    else if (s == "ar") m = 3;
    else if (s == "pr") m = 4;
    else if (s == "ay") m = 5;
    else if (s == "un") m = 6;
    else if (s == "ul") m = 7;
    else if (s == "ug") m = 8;
    else if (s == "ep") m = 9;
    else if (s == "ct") m = 10;
    else if (s == "ov") m = 11;
    else if (s == "ec") m = 12;
    return m;
}

int main() {
    int m, d;
    string s, res;
    cout << "Input the month : ";
    cin >> s;
    while (s != "Done" && s != "done") {
        cout << "Input the date : ";
        cin >> d;
        if (isalpha(s[0])) m = stom(s);
        else m = stoi(s);
        if (d > 0) {
            if (m == 1 && d > 31) res = "Wrong date !";
            else if (m == 2 && d > 29) res = "Wrong date !";
            else if (m == 3 && d > 31) res = "Wrong date !";
            else if (m == 4 && d > 30) res = "Wrong date !";
            else if (m == 5 && d > 31) res = "Wrong date !";
            else if (m == 6 && d > 30) res = "Wrong date !";
            else if (m == 7 && d > 31) res = "Wrong date !";
            else if (m == 8 && d > 31) res = "Wrong date !";
            else if (m == 9 && d > 30) res = "Wrong date !";
            else if (m == 10 && d > 31) res = "Wrong date !";
            else if (m == 11 && d > 30) res = "Wrong date !";
            else if (m == 12 && d > 31) res = "Wrong date !";
            else res = horoscope(m, d);
        }
        else res = "Wrong date !";
        cout << res << endl;
        cout << "Input the month : ";
        cin >> s;
    }
    return 0;
}