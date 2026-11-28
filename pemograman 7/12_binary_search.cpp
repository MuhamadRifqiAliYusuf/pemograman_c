#include <iostream>

int binaryIteratif(const int data[], int n, int target, int& langkah) {
    int kiri = 0, kanan = n - 1;
    langkah = 0;
    while (kiri <= kanan) {
        ++langkah;
        int tengah = kiri + (kanan - kiri) / 2;
        if (data[tengah] == target) return tengah;
        if (data[tengah] < target) kiri = tengah + 1;
        else kanan = tengah - 1;
    }
    return -1;
}

int binaryRekursif(const int data[], int kiri, int kanan, int target, int& langkah) {
    if (kiri > kanan) return -1;
    ++langkah;
    int tengah = kiri + (kanan - kiri) / 2;
    if (data[tengah] == target) return tengah;
    if (data[tengah] < target) return binaryRekursif(data, tengah + 1, kanan, target, langkah);
    return binaryRekursif(data, kiri, tengah - 1, target, langkah);
}

int main() {
    const int N = 10;
    int data[N] = {11, 22, 30, 33, 45, 57, 60, 78, 90, 99};
    std::cout << "Data terurut: ";
    for (int i = 0; i < N; ++i) std::cout << data[i] << ' ';
    std::cout << "\n\n";

    int target[] = {30, 33, 100};
    for (int i = 0; i < 3; ++i) {
        int langkah = 0;
        int posisi = binaryIteratif(data, N, target[i], langkah);
        std::cout << "Iteratif cari " << target[i] << " -> indeks " << posisi << " (" << langkah << " langkah)\n";
        langkah = 0;
        posisi = binaryRekursif(data, 0, N - 1, target[i], langkah);
        std::cout << "Rekursif cari " << target[i] << " -> indeks " << posisi << " (" << langkah << " langkah)\n";
    }
    return 0;
}
