#include <iostream>
using namespace std;

int sentinel(int arr[], int ukuran, int target) {
    int elemenTerakhir = arr[ukuran - 1];
    arr[ukuran - 1] = target;
    int i = 0;

    while (arr[i] != target) {
        i++;
    }
    arr[ukuran - 1] = elemenTerakhir;

    return (i < ukuran - 1) ? i : -1;
}

int main() {
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int ukuran = sizeof(array) / sizeof(array[0]);
    int target = 4;
    int hasil = sentinel(array, ukuran, target);

    if (hasil != -1) {
        cout << "Target ditemukan pada indeks: " << hasil << endl;
    } else {
        cout << "Target tidak ditemukan dalam array." << endl;
    }

    return 0;
}