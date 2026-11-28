#include <iostream>

int main() {
    int lengkap[5] = {10, 20, 30, 40, 50};
    int sebagian[5] = {1, 2};
    int kosong[5] = {0};
    int otomatis[] = {4, 8, 15, 16, 23, 42};
    const int UKURAN = sizeof(otomatis) / sizeof(otomatis[0]);

    int seragam[6];
    for (int i = 0; i < 6; ++i) {
        seragam[i] = 7;
    }

    int tetap[4] = {9, 8, 7, 6};
    int nol[4] = {0};
    for (int i = 0; i < 4; ++i) {
        tetap[i] = 1;
    }

    std::cout << "lengkap     : ";
    for (int i = 0; i < 5; ++i) std::cout << lengkap[i] << ' ';
    std::cout << '\n';

    std::cout << "sebagian    : ";
    for (int i = 0; i < 5; ++i) std::cout << sebagian[i] << ' ';
    std::cout << '\n';

    std::cout << "kosong      : ";
    for (int i = 0; i < 5; ++i) std::cout << kosong[i] << ' ';
    std::cout << '\n';

    std::cout << "otomatis    : ";
    for (int i = 0; i < UKURAN; ++i) std::cout << otomatis[i] << ' ';
    std::cout << "(ukuran " << UKURAN << ")\n";

    std::cout << "seragam     : ";
    for (int i = 0; i < 6; ++i) std::cout << seragam[i] << ' ';
    std::cout << '\n';

    std::cout << "array tetap : ";
    for (int i = 0; i < 4; ++i) std::cout << tetap[i] << ' ';
    std::cout << '\n';

    std::cout << "array nol   : ";
    for (int i = 0; i < 4; ++i) std::cout << nol[i] << ' ';
    std::cout << '\n';

    return 0;
}
