#include <iostream>
using namespace std;

int main() {
    int a, b, c;

    cout << "Masukkan nilai a: ";
    cin >> a;
    cout << "Masukkan nilai b: ";
    cin >> b;
    cout << "Masukkan nilai c: ";
    cin >> c;

    int x = 1;
    int hasil = 6 * (a * x * x + b * x + c);

    cout << "Hasil dari rumus 6 * (ax^2 + bx + c) saat x = 1 adalah: " << hasil      << endl;

return 0;
}