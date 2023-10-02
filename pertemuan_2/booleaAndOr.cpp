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
    string option;
    bool a, b, c;

    cout << "Pilih Opsi Soal yang dimana operator boolean dibawah ini ( opsi persis )" << endl;
    cout << "a. boolA AND boolB AND boolC" << endl;
    cout << "b. boolA AND boolB OR boolC" << endl;
    cout << "c. boolA OR boolB OR boolC" << endl;
    cout << "d. boolA AND boolB OR (NOT  boolC)" << endl;
    cin >> option;
    if (option == "a") {
        cout << "A terpilih" << endl;
        cout << "Masukkan nilai A" << endl;
        cin >> a;
        cout << "Masukkan nilai B" << endl;
        cin >> b;
        cout << "Masukkan nilai C" << endl;
        cin >> c;
        if (a && b && c == true) {
            cout << "Hasil dari output tersebut adalah TRUE" << endl;
        } else {
            cout << "Hasil dari output tersebut adalah FALSE" << endl;
        }
    }
    if (option == "b") {
        cout << "B terpilih" << endl;
        cout << "Masukkan nilai A" << endl;
        cin >> a;
        cout << "Masukkan nilai B" << endl;
        cin >> b;
        cout << "Masukkan nilai C" << endl;
        cin >> c;
        if (a && b || c == true) {
            cout << "Hasil dari output tersebut adalah TRUE" << endl;
        } else {
            cout << "Hasil dari output tersebut adalah FALSE" << endl;
        }
    }
    if (option == "c") {
        cout << "C terpilih" << endl;
        cout << "Masukkan nilai A" << endl;
        cin >> a;
        cout << "Masukkan nilai B" << endl;
        cin >> b;
        cout << "Masukkan nilai C" << endl;
        cin >> c;
        if (a || b || c == true) {
            cout << "Hasil dari output tersebut adalah TRUE" << endl;
        } else {
            cout << "Hasil dari output tersebut adalah FALSE" << endl;
        }
    }
    if (option == "d") {
        cout << "D terpilih" << endl;
        cout << "Masukkan nilai A" << endl;
        cin >> a;
        cout << "Masukkan nilai B" << endl;
        cin >> b;
        cout << "Masukkan nilai C" << endl;
        cin >> c;
        if (a && b || !c) {
            cout << "Hasil dari output tersebut adalah TRUE" << endl;
        } else {
            cout << "Hasil dari output tersebut adalah FALSE" << endl;
        }
    }
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
