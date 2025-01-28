#include<bits/stdc++.h>
using namespace std;

void setArr(int* arr, int rows, int columns, int desired_row, int desired_column, int val) {
    arr[desired_row*columns+desired_column] = val;
    return;
}

void getArr(int* arr, int rows, int columns, int desired_row, int desired_column) {
    cout << "The value from the desired index is  : " << arr[desired_row*columns+desired_column] << endl;
    return;
}

int main() {
    int* vec;
    int r, c, dr, dc, val;
    cout << "Enter rows and columns of 2D array:" << endl;
    cin >> r >> c;
    cout << "Memory allocation is created for array" << endl;
    cout << "Enter the desired rows and columns of array to set the values:" << endl;
    cin >> dr >> dc;
    while((dr < r)&&(dc < c)&&(0 <= dr)&&(0 <= dc)&&(0 < r)&&(0 < c)) {
        vec = new int [r*c];
        cout << "Enter the value to set in the array:" << endl;
        cin >> val;
        setArr(vec, r, c, dr, dc, val);
        cout << "Enter the desired rows and columns of array to get the values:" << endl;
        cin >> dr >> dc;
        if ((dr < 0)||(dc < 0)||(dr >= r)||(dc >= c)) break;
        getArr(vec, r, c, dr, dc);
        delete [] vec;
        cout << "Enter rows and columns of 2D array:" << endl;
        cin >> r >> c;
        cout << "Memory allocation is created for array" << endl;
        cout << "Enter the desired rows and columns of array to set the values:" << endl;
        cin >> dr >> dc;
    }
    cout << "Desired indices are invalid" << endl;
    return 0;
    
}