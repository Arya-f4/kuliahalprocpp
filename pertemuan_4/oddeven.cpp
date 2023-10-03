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
    bool genap;

    genap = true;
    cin >> n;
    int ganjil[n + 1];

    o = 0;
    for (i = 1; i <= n; i++) {
        genap = !genap;
        if (genap == false) {
            ganjil[i] = i;
            o = o + ganjil[i];
        }
    }
    if (genap == true) {
        cout << "Genap" << endl;
    } else {
        cout << "Ganjil" << endl;
    }
    cout << "Hasil dari jumlahan ganjil yang kurang dari ";
    cout << n;
    cout << " adalah ";
    cout << o << endl;
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
