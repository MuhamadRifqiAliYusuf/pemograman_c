#include <iostream>

int main() {
    int utuh = 5;
    double hasil = utuh + 0.5;

    std::cout << "implisit : " << hasil << '\n';

    double pi = 3.99;
    int p = static_cast<int>(pi);

    std::cout << "narrowing : " << p << " <- 3.99 menjadi 3\n";

    double nilai = 87.6;
    int dibulatkan = static_cast<int>(nilai + 0.5);

    std::cout << "pembulatan : " << dibulatkan << '\n';

    int total = 251, jumlah = 3;
    double rata2 = static_cast<double>(total) / jumlah;

    std::cout << "rata-rata : " << rata2 << '\n';

    std::cout << std::boolalpha;

    std::cout << "bool(0.0) : "
              << static_cast<bool>(0.0) << '\n';

    std::cout << "bool(0.001) : "
              << static_cast<bool>(0.001) << '\n';

    return 0;
}
