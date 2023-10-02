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
    int n, k;
    int rataakhir;
    int ratarata[4];

    ratarata[0] = 6;
    ratarata[1] = 9;
    ratarata[2] = 11;
    cout << "Inputkan nilai rata-rata!" << endl;
    cin >> n;
    cout << "Rata-rata yang di inputkan oleh user adalah : ";
    cout << n << endl;
    if (n < 0) {
        cout << "Nilai Yang di inputkan User negatif! tidak boleh negatif kata soal" << endl;
        cout << "inputkan nilai positif yang lain!" << endl;
        cin >> n;
    }
    k = 4 * n - (ratarata[0] + ratarata[1] + ratarata[2]);
    ratarata[3] = k;
    cout << "Nilai Dari K adalah: ";
    cout << k << endl;
    rataakhir = (int) ((double) (ratarata[0] + ratarata[1] + ratarata[2] + ratarata[3]) / 4);
    cout << "sehingga angka yang dalam soal beserta K-nya di akhir adalah : " << endl;
    cout << ratarata[0];
    cout << ",";
    cout << ratarata[1];
    cout << ",";
    cout << ratarata[2];
    cout << ",";
    cout << ratarata[3];
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
