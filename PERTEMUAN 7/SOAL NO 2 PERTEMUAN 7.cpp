#include <iostream>
using namespace std;

void bintang1(int tinggi) {
    for (int i = 1; i <= tinggi; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}

void bintang2(int tinggi) {
    for (int i = tinggi; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}

void bintang3(int tinggi) {
    for (int i = 0; i < tinggi; i++) {
        for (int j = 0; j <= tinggi - i; j++) {
            cout << "*";
        }
        for (int j = 0; j < 2 * i; j++) {
            cout << " ";
        }
        for (int j = 0; j <= tinggi - i; j++) {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = tinggi; i >= 0; i--) {
        for (int j = 0; j <= tinggi - i; j++) {
            cout << "*";
        }
        for (int j = 0; j < 2 * i; j++) {
            cout << " ";
        }
        for (int j = 0; j <= tinggi - i; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

int main() {
    int tinggi;
    cout << "Masukkan tinggi: ";
    cin >> tinggi;
    cout << endl;

    cout << "Segitiga:" << endl;
    bintang1(tinggi);
    cout << endl;

    cout << "Segitiga Terbalik:" << endl;
    bintang2(tinggi);
    cout << endl;

    cout << "Belah Ketupat:" << endl;
    bintang3(tinggi);
    cout << endl;

    return 0;
}