//
// Created by a on 2019/5/9.
//

#include <iostream>

using namespace std;

int main() {
    int a = 21;
    int b = 10;
    int c;
    c = a + b;
    cout << "Line 1 - c is " << c << endl;
    c = a - b;
    cout << "Line 2 - c is " << c << endl;
    c = a * b;
    cout << "Line 3 - c is " << c << endl;
    c = a / b;
    cout << "Line 4 - c is " << c << endl;
    c = a % b;
    cout << "Line 5 - c is " << c << endl;
    int d = 10;
    c = d++;
    cout << "Line 6 - c is " << c << endl;
    d = 10;
    c = d--;
    cout << "Line 7 - c is " << c << endl;
    return 0;
}