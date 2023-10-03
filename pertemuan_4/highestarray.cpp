#include <iostream>
#include <sstream>
#include <string>
#include <cstdlib>
#include <cmath>

using namespace std;

// Headers
string toString (double);
int toInt (string);
double toDouble (string);

int main() {
    int i, n, o, a, large;

    cout << "Masukkan Size Array Yang anda inginkan" << endl;
    cin >> a;
    int data[a];

    cout << "Masukkan List Angka yang anda masukkan tadi sebanyak ";
    cout << a << endl;
    for (i = 0; i <= a - 1; i++) {
        cin >> data[i];
    }
    large = data[0];
    n = 1;
    while (n <= i - 1) {
        if (data[n] > large) {
            large = data[n];
        } else {
            n = n + 1;
        }
    }
    cout << "[";
    for (o = 0; o <= a - 1; o++) {
        cout << data[o];
        cout << " ";
    }
    cout << "]" << endl;
    cout << "Nilai Terbesar dari array diatas adalah :";
    cout << large << endl;
    return 0;
}

// The following implements type conversion functions.
string toString (double value) { //int also
    stringstream temp;
    temp << value;
    return temp.str();
}

int toInt (string text) {
    return atoi(text.c_str());
}

double toDouble (string text) {
    return atof(text.c_str());
}
