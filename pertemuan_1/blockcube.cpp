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
    int panjang, lebar, tinggi, volume, permukaan;

    cout << "Masukkan Panjang untuk menghitung balok" << endl;
    cin >> panjang;
    cout << "Masukkan Lebar untuk menghitung balok" << endl;
    cin >> lebar;
    cout << "Masukkan Tinggi untuk menghitung balok" << endl;
    cin >> tinggi;
    volume = panjang * lebar * tinggi;
    permukaan = panjang * lebar * 2 + panjang * tinggi * 2 + lebar * tinggi * 2;
    cout << "Jumlah Volume Hasil dari perhitungan balok tersebut adalah :" << endl;
    cout << volume << endl;
    cout << "Hasil dari perhitungan seluruh permukaan balok tersebut adalah:" << endl;
    cout << permukaan << endl;
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
