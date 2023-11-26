#include <iostream>
using namespace std;

int binary(int arr[], int ukuran, int target) {
    int kiri = 0;
    int kanan = ukuran - 1;

    while (kiri <= kanan) {
        int tengah = kiri + (kanan - kiri) / 2; 

        if (arr[tengah] == target) {
            return tengah;
        } else if (arr[tengah] < target) {
            kiri = tengah + 1; 
        } else {
            kanan = tengah - 1; 
        }
    }

    return -1; 
}

int main() {
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int ukuran = sizeof(array) / sizeof(array[0]);
    int target = 7;
    int hasil = binary(array, ukuran, target);

    if (hasil != -1) {
        cout << "Target ditemukan pada indeks: " << hasil << endl;
    } else {
        cout << "Target tidak ditemukan dalam array." << endl;
    }

    return 0;
}