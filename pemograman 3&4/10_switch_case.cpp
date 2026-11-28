#include <iostream>

int main() {
    int pilihan = 2;

    std::cout << "Menu:\n";
    std::cout << "1. Lihat saldo\n";
    std::cout << "2. Transfer\n";
    std::cout << "3. Bayar tagihan\n";
    std::cout << "Pilihan Anda: " << pilihan << "\n\n";

    switch (pilihan) {
        case 1:
            std::cout << "Menampilkan saldo...\n";
            break;

        case 2:
            std::cout << "Memulai proses transfer...\n";
            break;

        case 3:
            std::cout << "Membuka menu pembayaran tagihan...\n";
            break;

        default:
            std::cout << "Pilihan tidak valid.\n";
            break;
    }

    char jawab = 'y';

    switch (jawab) {
        case 'y':
        case 'Y':
            std::cout << "Anda menjawab YA.\n";
            break;

        case 'n':
        case 'N':
            std::cout << "Anda menjawab TIDAK.\n";
            break;

        default:
            std::cout << "Jawaban tidak dikenali.\n";
            break;
    }

    int k = 1;

    std::cout << "Tanpa break: ";

    switch (k) {
        case 1:
            std::cout << "Satu ";
        case 2:
            std::cout << "Dua ";
        case 3:
            std::cout << "Tiga ";
        default:
            break;
    }

    std::cout << '\n';

    return 0;
}
