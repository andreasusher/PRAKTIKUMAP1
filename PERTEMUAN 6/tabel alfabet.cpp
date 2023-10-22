#include <iostream>
using namespace std;

int main() {
    int n = 26; 

    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            char ch = 'A' + j;
            cout << ch << " ";
        }
        cout << endl;
    }

    return 0;
}