#include <iostream>

using namespace std;

int main() {

    float a,b,hasil;
    char aritmatika;

    cout << "Quantum Calculator \n \n";
    cout << "masukan nilai pertama : ";
    cin >> a;
    cout << "masukan operator : ";
    cin >> aritmatika;
    cout << "masukan nilai kedua : ";
    cin >> b;
    cout << "hasilnya : \n";

    if (aritmatika == '+') {
        hasil = a + b;
    } else if (aritmatika == '-') {
        hasil = a - b;
    } else if (aritmatika == '*') {
        hasil = a * b;
    } else if (aritmatika == '/') {
        hasil = a / b;
    } else {
        cout << "mikir kids" << endl;
    }

    cout << a << aritmatika << b << " = " << hasil << endl;


    return 0;
}