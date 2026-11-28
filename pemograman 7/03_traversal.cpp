#include <iostream>

int main() {
    const int N = 8;
    int data[N] = {12, 7, 19, 4, 25, 7, 30, 16};

    std::cout << "1) for dengan indeks: ";
    for (int i = 0; i < N; ++i) std::cout << data[i] << ' ';
    std::cout << '\n';

    std::cout << "2) while             : ";
    int i = 0;
    while (i < N) {
        std::cout << data[i] << ' ';
        ++i;
    }
    std::cout << '\n';

    std::cout << "3) for dengan indeks : ";
    for (int j = 0; j < N; ++j) std::cout << data[j] << ' ';
    std::cout << '\n';

    for (int j = 0; j < N; ++j) data[j] *= 2;

    std::cout << "4) setelah x *= 2    : ";
    for (int j = 0; j < N; ++j) std::cout << data[j] << ' ';
    std::cout << '\n';

    int total = 0;
    int genap = 0;
    for (int j = 0; j < N; ++j) {
        total += data[j];
        if (data[j] % 2 == 0) ++genap;
    }

    std::cout << "\nTotal semua elemen : " << total << '\n';
    std::cout << "Banyak elemen genap: " << genap << '\n';
    return 0;
}
