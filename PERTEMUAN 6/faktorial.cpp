#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n;
    double faktorial = 1;

    cout << "Masukkan bilangan : ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        faktorial *= i;
    }

    cout << n << "! = " << fixed << setprecision(0) << faktorial << endl;

    return 0;
}