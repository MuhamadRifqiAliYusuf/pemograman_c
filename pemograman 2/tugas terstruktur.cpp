#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    // Konstanta
    const double PPN = 11.0;

    // Variabel
    string namaBarang;
    double hargaSatuan, persenDiskon;
    int jumlah;

    // Input
    cout << "Nama barang      : ";
    cin >> namaBarang;

    cout << "Harga satuan     : Rp ";
    cin >> hargaSatuan;

    cout << "Jumlah           : ";
    cin >> jumlah;

    cout << "Diskon (%)       : ";
    cin >> persenDiskon;

    // Perhitungan
    double subtotal = hargaSatuan * jumlah;
    double potonganDiskon = subtotal * persenDiskon / 100;
    double nilaiSetelahDiskon = subtotal - potonganDiskon;
    double nilaiPPN = nilaiSetelahDiskon * PPN / 100;
    double totalBayar = nilaiSetelahDiskon + nilaiPPN;

    // Output struk
    cout << fixed << setprecision(2);

    cout << "\n=====================================\n";
    cout << "          STRUK PEMBELIAN\n";
    cout << "=====================================\n";

    cout << left << setw(20) << "Barang"
         << ": " << namaBarang << endl;

    cout << left << setw(20) << "Harga satuan"
         << ": Rp " << hargaSatuan << endl;

    cout << left << setw(20) << "Jumlah"
         << ": " << jumlah << endl;

    cout << left << setw(20) << "Subtotal"
         << ": Rp " << subtotal << endl;

    cout << left << setw(20) << "Diskon (" << persenDiskon << "%)"
         << ": Rp " << potonganDiskon << endl;

    cout << left << setw(20) << "Setelah diskon"
         << ": Rp " << nilaiSetelahDiskon << endl;

    cout << left << setw(20) << "PPN 11%"
         << ": Rp " << nilaiPPN << endl;

    cout << left << setw(20) << "Total bayar"
         << ": Rp " << totalBayar << endl;

    cout << "=====================================\n";

    return 0;
}
