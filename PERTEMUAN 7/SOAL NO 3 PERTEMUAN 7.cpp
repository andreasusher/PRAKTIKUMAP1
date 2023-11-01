#include <iostream>
using namespace std;

void tukar(int &a,int &b);
void ubah(int &a, int &b);

int main() {
  int a, b;
  a = 5;  
  b = 10;
  cout << "nilai sebelum ditukar : " << a << " dan " << b << endl;
  tukar(a,b);
  cout << "nilai setelah ditukar : " << a << " dan " << b << endl;
  ubah(a,b);
  cout << "nilai setelah diubah : " << a << " dan " << b << endl;

} 
void tukar(int &a, int &b) {
  int n;
  n = a;
  a = b;
  b = n;
} 
void ubah (int&a, int &b) {
  a = 14;
  b = 666;
}