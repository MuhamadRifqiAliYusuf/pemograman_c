#include <iostream>

int main() {
    int a = 10, b = 0;

    if (b != 0 && a / b > 2) {
        std::cout << "a/b lebih besar dari 2\n";
    } else {
        std::cout << "Pembagian aman dilewati (b = 0)\n";
    }

    int i = 0;
    bool aktif = false;

    if (aktif && ++i > 0) {
    }

    std::cout << "Nilai i setelah if: " << i
              << " (++i tidak dijalankan)\n";

    int j = 0;
    bool login = true;

    if (login || ++j > 0) {
        std::cout << "Login valid\n";
    }

    std::cout << "Nilai j setelah if: " << j
              << " (++j tidak dijalankan)\n";

    return 0;
}
