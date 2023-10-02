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
    double tinggi, alas, volumetp, permukaantp, radiusx, tinggiy, n;

    cout << "Data yang telah diketahui adalah tinggi kerucut = 10" << endl;
    cout << "Masukkan Radius Alas yang akan menjadi variabel X" << endl;
    cin >> radiusx;
    cout << "Masukkan Titik Potong yang akan memotong Titik puncak, yang dimana akan menjadi Y(jangan lebih dari 10)" << endl;
    cin >> tinggiy;
    if (tinggiy > 10) {
        cout << "Terlalu tinggi daripada tinggi kerucut" << endl;
        // Close
    }
    cout << "Hasil dari volume kerucut tersebut setelah dipotong titik Y adalah:" << endl;
    tinggi = 10 - tinggiy;
    n = pow(radiusx, 2) + pow(tinggi, 2);
    volumetp = (double) 1 / 3 * 22 / 7 * pow(radiusx, 2) * tinggi;
    permukaantp = (double) 22 / 7 * radiusx * (radiusx + sqrt(n));
    cout << "Hasil dari volume kerucut yang terpotong adalah : " << endl;
    cout << volumetp << endl;
    cout << "Hasil dari Luas Permukaan kerucut yang terpotong adalah:" << endl;
    cout << permukaantp << endl;
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
