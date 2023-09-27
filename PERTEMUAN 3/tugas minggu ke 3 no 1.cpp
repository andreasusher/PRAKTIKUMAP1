#include <iostream>
using namespace std;

int main() {
  int bilangan;
  cout <<  "masukkan angka : ";
  cin >> bilangan;
  cout<<endl;
  
  if (bilangan %2==0){
     cout << bilangan << "bilangan genap" << endl;
  }else {
      cout << bilangan << " bilangan ganjil" << endl;
  }

}
