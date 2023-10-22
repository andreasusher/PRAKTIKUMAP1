#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Masukan nilai: ";
    cin >> n;

    if (n > 1000) {
      cout << "nilai n tidak boleh dari seribu" << endl;
      return 1;
    }

    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            cout << "- 1/" << i;
        } else {
            if (i == 1) {
                cout << "1";
            } else {
                cout << "+ 1/" << i;
            }
        }

        if (i < n) {
            cout << " ";
        }
    }

    cout << endl;

    return 0;
}