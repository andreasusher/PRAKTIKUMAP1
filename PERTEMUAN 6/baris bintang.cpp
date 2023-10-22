#include <iostream>
using namespace std;

int main() {
    int jumlah_baris;

    cout << "Masukkan jumlah baris: ";
    cin >> jumlah_baris;

    for (int i = 1; i <= jumlah_baris; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}