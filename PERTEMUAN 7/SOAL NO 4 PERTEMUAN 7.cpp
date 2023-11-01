#include <iostream>
using namespace std;

int meterKeSentimeter(int meters) {
    return meters * 100;
}

int sentimeterKeMeter(int centimeters) {
    return centimeters / 100;
}

int main() {
    const int panjangPitaMeter = 12;
    const int panjangPitaCm = meterKeSentimeter(panjangPitaMeter);
    const int panjangSetiapIkatanCm = 45;

    int jumlahIkatan = panjangPitaCm / panjangSetiapIkatanCm;
    int sisaPitaCm = panjangPitaCm % panjangSetiapIkatanCm;

    cout << "Dari pita " << panjangPitaMeter << " meter, Anda dapat membuat " << jumlahIkatan << " ikatan bunga rangkai." << endl;
    cout << "Sisa pita yang belum digunakan adalah " << sentimeterKeMeter(sisaPitaCm) << " meter " <<  sisaPitaCm % 100 << " centimeter." << endl;

return 0;
}