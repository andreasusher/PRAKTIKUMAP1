#include <iostream>
using namespace std;

int main() {
    double panjang_kertas, lebar_kertas, margin_atas, margin_bawah, margin_kiri, margin_kanan;
    double ukuran_titik;
    char spasi;

    cout << "Masukkan panjang kertas (inci): ";
    cin >> panjang_kertas;
    cout << "Masukkan lebar kertas (inci): ";
    cin >> lebar_kertas;
    cout << "Masukkan margin atas (inci): ";
    cin >> margin_atas;
    cout << "Masukkan margin bawah (inci): ";
    cin >> margin_bawah;
    cout << "Masukkan margin kiri (inci): ";
    cin >> margin_kiri;
    cout << "Masukkan margin kanan (inci): ";
    cin >> margin_kanan;
    cout << "Masukkan ukuran titik suatu garis: ";
    cin >> ukuran_titik;
    cout << "Apakah garis diberi spasi ganda? (y/n): ";
    cin >> spasi;

    if (spasi == 'y' || spasi == 'Y') {
        ukuran_titik *= 2.0;
    }

    double panjang_efektif = lebar_kertas - margin_kiri - margin_kanan;

    int jumlah_karakter = static_cast<int>(panjang_efektif / (ukuran_titik / 72.0));

    int jumlah_baris = static_cast<int>((panjang_kertas - margin_atas - margin_bawah) / (ukuran_titik / 72.0));

    cout << "\nJumlah karakter dalam satu baris: " << jumlah_karakter << " karakter" << endl;
    cout << "Jumlah baris yang dapat dicetak pada kertas: " << jumlah_baris << " baris" << endl;

    return 0;
}