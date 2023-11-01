#include <iostream>
#include <string>
using namespace std;

bool validate_password(const string& password) {
    if (password.length() != 8)
        return false;

    for (int i = 0; i < 8; i++) {
        if (!isalnum(password[i]) || password.find(password[i]) != password.rfind(password[i]) || password[i] == ' ')
            return false;
    }

    return true;
}

string encrypt_password( string& password) {
    string encrypted_password = "";
    for (char c : password) {
        if (isalpha(c)) {
           
            char shifted_char = c + 2;
            if (islower(c) && shifted_char > 'z')
                shifted_char -= 26;
            encrypted_password += shifted_char;
        } else if (isdigit(c)) {
           
            int digit = c - '0';
            int doubled_digit = digit * 2;
            encrypted_password += to_string(doubled_digit);
        }
    }
    return encrypted_password;
}

int main() {
    string password;
    cout << "input password: ";
    cin >> password;

    if (validate_password(password)) {
        string encrypted_password = encrypt_password(password);
        cout << "Password yang diinput: " << password << endl;
        cout << "Password yang disimpan setelah konversi: " << encrypted_password << endl;
    } else {
        cout << "Password tidak valid. Pastikan memenuhi semua syarat dan aturan a-d." << endl;
    }

    return 0;
}
