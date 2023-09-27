#include <iostream>
using namespace std;

int main() {
    int bilangan1, bilangan2, bilangan3;
    // memasukkan tiga bilangan
    cout << "Masukkan bilangan pertama: ";
    cin >> bilangan1;
    cout << "Masukkan bilangan kedua: ";
    cin >> bilangan2;
    cout << "Masukkan bilangan ketiga: ";
    cin >> bilangan3;

    // Bandingkan ketiga bilangan
    if (bilangan1 >= bilangan2 && bilangan1 >= bilangan3) {
        cout << "Bilangan pertama (" << bilangan1 << ") yang paling maksimal." << endl;
    } else if ( bilangan2 >= bilangan1 && bilangan2 >= bilangan3 ) {
        cout << "Bilangan kedua (" << bilangan2 << ")  yang paling maksimal." << endl;
    } else {
        cout << "Bilangan ketiga (" << bilangan3 << ")  yang paling maksimal." << endl;
    }
}