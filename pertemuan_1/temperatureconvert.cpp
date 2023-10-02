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
void celciustofahrenheittoreamur();

void fahrenheittocelciustoreamur();

void reamurtocelciustofahrenheit();

int main() {
    int option;

    cout << "pilih salah satu konversi dibawah ini: " << endl;
    cout << "1 Celcius ke fahrenheit dan  reamur" << endl;
    cout << "2 Fahrenheit ke celcius dan  reamur" << endl;
    cout << "3 Reamur ke celcius dan fahrenheit" << endl;
    cin >> option;
    if (option == 1) {
        celciustofahrenheittoreamur();
    }
    if (option == 2) {
        fahrenheittocelciustoreamur();
    }
    if (option == 3) {
        reamurtocelciustofahrenheit();
    }
    return 0;
}

void celciustofahrenheittoreamur() {
    cout << "masukkan Celcius dalam  bentuk angka untuk di konversi ke Fahrenheit, dan Reamur" << endl;
    int celcius, reamur, fahrenheit;

    cin >> celcius;
    fahrenheit = (int) ((double) (celcius * 9) / 5 + 32);
    reamur = (int) (celcius * 0.8);
    cout << "Hasil dari konversi celcius ke fahrenheit adalah" << endl;
    cout << fahrenheit << endl;
    cout << "Hasil dari konversi celcius ke reamur adalah" << endl;
    cout << reamur << endl;
}

void fahrenheittocelciustoreamur() {
    cout << "masukkan fahrenheit dalam  bentuk angka untuk di konversi ke celcius ,dan reamur" << endl;
    int celcius, reamur, fahrenheit;

    cin >> fahrenheit;
    reamur = (int) ((fahrenheit - 32) / 2.25);
    celcius = (int) ((double) 5 / 9 * (fahrenheit - 32));
    cout << "Hasil konversi Fahrenheit ke Celcius adalah" << endl;
    cout << celcius << endl;
    cout << "Hasil konversi dari fahrenheit ke reamur adalah" << endl;
    cout << reamur << endl;
}

void reamurtocelciustofahrenheit() {
    cout << "masukkan reamur dalam  bentuk angka untuk di konversi ke celcius ,dan fahrenheit" << endl;
    int celcius, reamur, fahrenheit;

    cin >> reamur;
    fahrenheit = (int) ((double) (reamur * 9) / 4 + 32);
    celcius = (int) ((double) (reamur * 5) / 4);
    cout << "Hasil konversi Reamur ke Celcius adalah" << endl;
    cout << celcius << endl;
    cout << "Hasil konversi dari reamur ke fahrenheit adalah" << endl;
    cout << fahrenheit << endl;
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
