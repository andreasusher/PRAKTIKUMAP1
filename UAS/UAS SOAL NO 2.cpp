#include <iostream>
#include <algorithm>
#include <vector>

struct Anak {
    std::string Nama;
    std::string Tanggal_Lahir;
};

bool compareTahunLahir(const Anak& a, const Anak& b) {
    return a.Tanggal_Lahir < b.Tanggal_Lahir;
}

int main() {
   
    std::vector<Anak> data_anak = {
        {"Anak1", "01-01-2000"},
        {"Anak2", "02-03-2020"},

    };

   
    std::sort(data_anak.begin(), data_anak.end(), compareTahunLahir);

   
    std::cout << "Data yang belum terurut:\n";
    for (const auto& anak : data_anak) {
        std::cout << anak.Nama << ": " << anak.Tanggal_Lahir << "\n";
    }

    std::cout << "\nData yang sudah terurut:\n";
    for (const auto& anak : data_anak) {
        std::cout << anak.Nama << ": " << anak.Tanggal_Lahir << "\n";
    }

    return 0;
}