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
    double hargabeli, hargajual, ongkos, persen, persenuntung, keuntungan;

    cout << "masukkan harga beli yang anda inginkan, jika harga beli perliternya 30.000" << endl;
    cin >> hargabeli;
    cout << "masukkan presentase ongkos yang diinginkan" << endl;
    cin >> persen;
    cout << "masukkan keuntungan yang diinginkan" << endl;
    cin >> keuntungan;
    ongkos = hargabeli * persen / 100;
    hargajual = hargabeli + ongkos + keuntungan;
    persenuntung = (hargajual - hargabeli) / 100;
    cout << "berikut adalah presentase keuntungannya ";
    cout << persenuntung;
    cout << "%" << endl;
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
