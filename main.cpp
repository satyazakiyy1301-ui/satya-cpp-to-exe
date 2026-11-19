#include <iostream>
using namespace std;

int main() {
    string nama;
    int umur;

    cout << "Masukkan nama: ";
    getline(cin, nama);

    cout << "Masukkan umur: ";
    cin >> umur;

    cout << "\n=== DATA DIRI ===" << endl;
    cout << "Nama: " << nama << endl;
    cout << "Umur: " << umur << " tahun" << endl;

    cout << "\nProgram berhasil dijalankan!" << endl;

    return 0;
}
