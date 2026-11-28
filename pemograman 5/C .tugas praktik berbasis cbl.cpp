#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const int PIN_BENAR = 1234;
    const double BIAYA_ADMIN = 2500.0;
    double saldo = 500000.0;
    int pin, pilihan;
    bool berhasil = false;
    double nominal;

    cout << fixed << setprecision(2);

    // Perulangan verifikasi PIN maksimal 3 kali
    for (int i = 1; i <= 3; i++) {
        cout << "Masukkan PIN: ";
        cin >> pin;

        if (pin == PIN_BENAR) {
            berhasil = true;
            break;
        } else {
            cout << "PIN salah. Percobaan ke-" << i << endl;
        }
    }

    if (!berhasil) {
        cout << "Kartu diblokir. Program berhenti.\n";
        return 0;
    }

    // Menu ATM berulang sampai pengguna memilih keluar
    do {
        cout << "\n===== MENU ATM =====\n";
        cout << "1. Cek Saldo\n";
        cout << "2. Setor Tunai\n";
        cout << "3. Tarik Tunai\n";
        cout << "4. Keluar\n";
        cout << "Pilih menu: ";
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                cout << "Saldo: Rp" << saldo << endl;
                break;

            case 2:
                // Validasi nominal setor
                do {
                    cout << "Nominal setor (kelipatan Rp10.000): Rp";
                    cin >> nominal;

                    if (nominal <= 0 ||
                        nominal != static_cast<long long>(nominal) ||
                        static_cast<long long>(nominal) % 10000 != 0) {
                        cout << "Nominal tidak valid!\n";
                    }
                } while (nominal <= 0 ||
                         nominal != static_cast<long long>(nominal) ||
                         static_cast<long long>(nominal) % 10000 != 0);

                saldo += nominal;
                cout << "Setor berhasil.\n";
                cout << "Saldo sekarang: Rp" << saldo << endl;
                break;

            case 3:
                // Validasi nominal tarik dan saldo
                do {
                    cout << "Nominal tarik (kelipatan Rp50.000): Rp";
                    cin >> nominal;

                    if (nominal <= 0 ||
                        nominal != static_cast<long long>(nominal) ||
                        static_cast<long long>(nominal) % 50000 != 0) {
                        cout << "Nominal tidak valid!\n";
                    } else if (nominal + BIAYA_ADMIN > saldo) {
                        cout << "Saldo tidak cukup!\n";
                    } else {
                        break;
                    }
                } while (true);

                saldo -= nominal + BIAYA_ADMIN;
                cout << "Penarikan berhasil.\n";
                cout << "Biaya admin: Rp" << BIAYA_ADMIN << endl;
                cout << "Saldo sekarang: Rp" << saldo << endl;
                break;

            case 4:
                cout << "Terima kasih.\n";
                break;

            default:
                cout << "Pilihan tidak valid!\n";
        }

    } while (pilihan != 4);

    return 0;
}
