#include <iostream>
using namespace std;

int main() {
    double data[10], total = 0.0;

    for (int i = 0; i < 10; i++) {
        cout << "Masukkan data ke-" << i + 1 << ": ";
        cin >> data[i];
        total += data[i];
    }

    double min = data[0], max = data[0];

    for (int i = 1; i < 10; i++) {
        if (data[i] < min) {
            min = data[i];
        }
        if (data[i] > max) {
            max = data[i];
        }
    }

    double rata_rata = total / 10.0;

    cout << "Nilai rata-rata: " << rata_rata << endl;
    cout << "Nilai terkecil: " << min << endl;
    cout << "Nilai terbesar: " << max << endl;

    return 0;
}