#include <iostream>
#include <iomanip>
using namespace std;

int total(int nilai[], int n) {
    int jumlah = 0;
    for (int i = 0; i < n; i++) {
        jumlah += nilai[i];
    }
    return jumlah;
}

double rataRata(int nilai[], int n) {
    return (double)total(nilai, n) / n;
}

int nilaiMaks(int nilai[], int n) {
    int maks = nilai[0];
    for (int i = 1; i < n; i++) {
        if (nilai[i] > maks) {
            maks = nilai[i];
        }
    }
    return maks;
}

int nilaiMin(int nilai[], int n) {
    int min = nilai[0];
    for (int i = 1; i < n; i++) {
        if (nilai[i] < min) {
            min = nilai[i];
        }
    }
    return min;
}

int hitungLulus(int nilai[], int n) {
    int lulus = 0;
    for (int i = 0; i < n; i++) {
        if (nilai[i] >= 60) {
            lulus++;
        }
    }
    return lulus;
}

int diAtasRataRata(int nilai[], int n) {
    int jumlah = 0;
    double rata = rataRata(nilai, n);

    for (int i = 0; i < n; i++) {
        if (nilai[i] > rata) {
            jumlah++;
        }
    }
    return jumlah;
}

void urutNaik(int nilai[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (nilai[i] > nilai[j]) {
                int temp = nilai[i];
                nilai[i] = nilai[j];
                nilai[j] = temp;
            }
        }
    }
}

int main() {
    int n;
    int nilai[20];

    if (!(cin >> n) || n < 1 || n > 20) {
        cout << "Input tidak valid" << endl;
        return 0;
    }

    for (int i = 0; i < n; i++) {
        if (!(cin >> nilai[i]) || nilai[i] < 0 || nilai[i] > 100) {
            cout << "Input tidak valid" << endl;
            return 0;
        }
    }

    cout << fixed << setprecision(2);

    cout << "Total      : " << total(nilai, n) << endl;
    cout << "Rata-rata  : " << rataRata(nilai, n) << endl;
    cout << "Maksimum   : " << nilaiMaks(nilai, n) << endl;
    cout << "Minimum    : " << nilaiMin(nilai, n) << endl;
    cout << "Lulus      : " << hitungLulus(nilai, n) << endl;
    cout << "Di atas rata-rata : " << diAtasRataRata(nilai, n) << endl;

    urutNaik(nilai, n);

    cout << "Terurut    : ";
    for (int i = 0; i < n; i++) {
        cout << nilai[i];
        if (i < n - 1) {
            cout << " ";
        }
    }

    cout << endl;

    return 0;
}
