#include <iostream>

int ambilAman(const int data[], int ukuran, int indeks) {
    if (indeks < 0 || indeks >= ukuran) return -1;
    return data[indeks];
}

int main() {
    int data[4] = {10, 20, 30, 40};
    const int N = 4;

    std::cout << "data[2] = " << ambilAman(data, N, 2) << '\n';
    std::cout << "data[4] (di luar) = " << ambilAman(data, N, 4) << '\n';
    std::cout << "data[-1] (di luar) = " << ambilAman(data, N, -1) << '\n';
    std::cout << "Selalu gunakan indeks 0 sampai " << N - 1 << ".\n";
    return 0;
}
