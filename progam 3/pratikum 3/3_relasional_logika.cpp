#include <iostream>

int main() {
    int x = 8;

    // Tampilkan bool sebagai true/false, bukan 1/0
    std::cout << std::boolalpha;

    // Operator perbandingan
    std::cout << "x == 8 : " << (x == 8) << '\n';
    std::cout << "x != 8 : " << (x != 8) << '\n';
    std::cout << "x < 5 : " << (x < 5) << '\n';
    std::cout << "x >= 8 : " << (x >= 8) << '\n';

    // Operator logika
    bool hujan = true;
    bool bawaPayung = false;

    std::cout << "\nhujan && bawaPayung : "
              << (hujan && bawaPayung) << '\n';

    std::cout << "hujan || bawaPayung : "
              << (hujan || bawaPayung) << '\n';

    std::cout << "!hujan : "
              << (!hujan) << '\n';

    // Mengecek apakah x berada di antara 1 dan 10
    std::cout << "\n1 <= x <= 10 : "
              << (x >= 1 && x <= 10) << '\n';

    // 0 = false, selain 0 = true
    std::cout << "bool(0) = "
              << static_cast<bool>(0)
              << ", bool(-1) = "
              << static_cast<bool>(-1) << '\n';

    return 0;
}
