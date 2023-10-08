#include <iostream>
#include <vector>
#include <string>
using namespace std;

string arabicToRoman(int num) {
    vector<pair<int, string>> romans({ {1000, "M"}, {900, "CM"}, {500, "D"}, {400, "CD"}, {100, "C"}, {90, "XC"}, {50, "L"}, {40, "XL"}, {10, "X"}, {9, "IX"}, {5, "V"}, {4, "IV"}, {1, "I"} });
    string roman = "";
    while (num > 0) {
        for (auto &[v, r]: romans) {
            if (num >= v) {
                num -= v;
                roman += r;
                break;
            }
        }
    }
    return roman;
}

int main() {
    int angka;
    cout << "Masukkan angka arab: ";
    cin >> angka;
    cout << "Angka romawi: " << arabicToRoman(angka) << endl;
    return 0;
}