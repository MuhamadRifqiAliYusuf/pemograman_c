//Esai 2
//(a) Loop luar mengatus, sedangkan loop dalam mencetak angka sesuai nomor baris.
//(b):
 #include <iostream>
using namespace std;

int main() {
    int T = 4;

    for (int i = 1; i <= T; i++) {
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}
//(c) Total angka untuk  adalah 55 angka.
//(d) Output pola terbalik:
1 2 3 4
1 2 3
1 2
1
