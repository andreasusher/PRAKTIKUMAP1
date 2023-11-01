#include <iostream>
using namespace std;

int main() {

    double us_dollars = 12000;
    double euros = 20000;

    double euro_to_usd_rate = 0.997;   
    double usd_to_idr_rate = 15000;  
    

    double harga_mobil_idr = 425000000;

    double tabungan_usd = us_dollars + (euros * euro_to_usd_rate);
    double tabungan_idr = tabungan_usd * usd_to_idr_rate;

    double remaining_money_idr = tabungan_idr - harga_mobil_idr;

    cout << "Tabungan Pak Anto dalam mata uang asing:" << endl;
    cout << "US Dollar: " << us_dollars << " USD" << endl;
    cout << "Euro: " << euros << " Euro" << endl;
    cout << "----------------------------------------" << endl;
    cout << "Total tabungan dalam Rupiah: " << tabungan_idr << " IDR" << endl;
    cout << "Harga mobil yang dibeli Pak Anto: " << harga_mobil_idr << " IDR" << endl;
    cout << "----------------------------------------" << endl;
    cout << "Sisa uang Pak Anto setelah membeli mobil: " << remaining_money_idr << " IDR" << endl;

    return 0;
}