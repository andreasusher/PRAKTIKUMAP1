#include <iostream>
#include <string>
using namespace std;

int main(){
	int bilangan1,bilangan2, pilihan;
	float hasil;
	string operasi;
	
	cout<<"PILIH OPERATOR "<<endl;
	cout<<"1. Penjumlahan"<<endl;
	cout<<"2. Pengurangan"<<endl;
	cout<<"3. Perkalian"<<endl;
	cout<<"4. Pembagian"<<endl;
	cout<<endl;
	
	cout<<"Masukan Pilihan : ";
	cin>>pilihan;
	cout<<" Bilangan pertama : ";
	cin>>bilangan1;
	cout<<" Bilangan kedua : ";
	cin>>bilangan2;	
	
	switch (pilihan){
	   case 1 : hasil=bilangan1+bilangan2;
			operasi='+';
			break;
		case 2 : hasil=bilangan1-bilangan2;
			operasi='-';
			break;
		case 3 : hasil=bilangan1*bilangan2;
			operasi='*';
			break;
		case 4 : hasil=bilangan1/bilangan2;
			operasi='/';
  }
	cout<<" " <<bilangan1<<operasi<<bilangan2<<"="<<hasil<<endl;
}