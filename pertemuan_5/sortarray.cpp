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
    int i, n, k, j, temp;
    int a[10];

    cin >> n;
    for (i = 0; i <= n - 1; i++) {
        cin >> k;
        a[i] = k;
        cout << a[i] << endl;
    }
    for (i = 0; i <= n - 1; i++) {
        for (j = n - 1; j >= i + 1; j--) {
            if (a[j] < a[j - 1]) {
                temp = a[j];
                a[j] = a[j - 1];
                a[j - 1] = temp;
            }
        }
    }
    cout << "Ter urutkan" << endl;
    for (i = 0; i <= n - 1; i++) {
        cout << a[i] << endl;
    }

    // 
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
