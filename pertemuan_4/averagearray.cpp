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
    int n, i, o;
    double r;

    cin >> n;
    int angka[n + 1];

    for (i = 0; i <= n; i++) {
        angka[i] = i;
    }
    i = 0;
    o = 0;
    for (i = 0; i <= n; i++) {
        o = o + angka[i];
    }
    r = (double) o / n;
    cout << "Jumlah seluruh bilangan tersebut adalah: ";
    cout << o << endl;
    cout << "Rata-rata dari jumlah keseluruhan tersebut adalah :";
    cout << r << endl;
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
