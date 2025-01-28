#include<bits/stdc++.h>
using namespace std;

double metaRate(double weight) {
    return 70 * pow((weight / 2.2), 0.756);
}

double physiAct(double weight, double intensity, double minutes) {
    return 0.0385 * intensity * weight * minutes;
}

int main() {
    double weight, intensity, minutes, food, total;
    cout << "Please enter the (weight,intensity,minutes,calories_for_food): ";
    cin >> weight >> intensity >> minutes >> food;
    if (!weight && !intensity && !minutes && !food) return 0;
    do {
        total = (metaRate(weight) + physiAct(weight, intensity, minutes)) * 10 / 9;
        total /= food;
        cout << "You need to eat " << total << " servings of your favorite food per day!" << endl;
        cout << "Please enter the (weight,intensity,minutes,calories_for_food): ";
        cin >> weight >> intensity >> minutes >> food;
    } while (weight || intensity || minutes || food);
    return 0;
}