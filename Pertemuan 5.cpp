#include <iostream>
#include <ctime>

using namespace std;

bool isKabisat(int tahun) {
    return (tahun % 4 == 0 && tahun % 100 != 0) || (tahun % 400 == 0);
}

void tambahHari(int &hari, int &bulan, int &tahun, int hariDitambahkan) {
    const int jumlahHariPerBulan[] = {0, 31, 28 + isKabisat(tahun), 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    while (hariDitambahkan > 0) {
        int hariDalamBulanIni = jumlahHariPerBulan[bulan] - hari + 1;

        if (hariDitambahkan >= hariDalamBulanIni) {
            hariDitambahkan -= hariDalamBulanIni;
            hari = 1;
            bulan++;
            if (bulan > 12) {
                bulan = 1;
                tahun++;
            }
        } else {
            hari += hariDitambahkan;
            hariDitambahkan = 0;
        }
    }
}

int main() {
    int hari, bulan, tahun, hariDitambahkan;

    cout << "Masukkan tanggal (1-31): ";
    cin >> hari;

    cout << "Masukkan bulan (1-12): ";
    cin >> bulan;

    cout << "Masukkan tahun (contoh: 2023): ";
    cin >> tahun;

    cout << "Masukkan jumlah hari yang akan ditambahkan: ";
    cin >> hariDitambahkan;

    if (hari < 1 || hari > 31 || bulan < 1 || bulan > 12 || tahun < 0) {
        cout << "Tanggal, bulan, atau tahun tidak valid." << endl;
        return 1;
    }

    tambahHari(hari, bulan, tahun, hariDitambahkan);

    cout << "Tanggal setelah penambahan " << hariDitambahkan << " hari: " << hari << "/" << bulan << "/" << tahun << endl;

    return 0;
}