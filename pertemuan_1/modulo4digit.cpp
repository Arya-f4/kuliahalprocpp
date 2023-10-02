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
    int n, a, b, c, d, e;

    cout << "Masukkan angka yang anda inginkan yang dimana terdiri dari 4 digit" << endl;
    cin >> n;
    a = (int) ((double) n / 1000);
    b = (int) ((double) (n % 1000) / 100);
    c = (int) ((double) (n % 100) / 10);
    d = n % 10;
    e = a + b + c + d;
    cout << "Output hasil dari modulus 10 bilangan tersebut adalah" << endl;
    cout << e << endl;
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
