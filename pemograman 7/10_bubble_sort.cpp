#include <iostream>

void bubbleSort(int data[], int n, long& perbandingan, long& pertukaran) {
    perbandingan = 0; pertukaran = 0;
    for (int lintasan = 0; lintasan < n - 1; ++lintasan) {
        bool adaTukar = false;
        for (int i = 0; i < n - 1 - lintasan; ++i) {
            ++perbandingan;
            if (data[i] > data[i + 1]) {
                int sementara = data[i]; data[i] = data[i + 1]; data[i + 1] = sementara;
                ++pertukaran; adaTukar = true;
            }
        }
        if (!adaTukar) break;
    }
}

void cetak(const int data[], int n) {
    for (int i = 0; i < n; ++i) std::cout << data[i] << (i + 1 < n ? " " : "\n");
}

int main() {
    int data[] = {64, 34, 25, 12, 22, 11, 90, 45};
    const int N = sizeof(data) / sizeof(data[0]);
    std::cout << "Sebelum : "; cetak(data, N);
    long banding = 0, tukar = 0;
    bubbleSort(data, N, banding, tukar);
    std::cout << "Sesudah : "; cetak(data, N);
    std::cout << "\nPerbandingan : " << banding << '\n';
    std::cout << "Pertukaran   : " << tukar << '\n';
    return 0;
}
