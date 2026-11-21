#include <iostream>

int main() {
    int a = 2 + 3 * 4;
    int b = (2 + 3) * 4;

    std::cout << "2 + 3 * 4 = " << a << '\n';
    std::cout << "(2 + 3) * 4 = " << b << '\n';

    int c = 20 - 5 - 3;

    std::cout << "20 - 5 - 3 = " << c << '\n';

    bool d = 3 + 4 > 6 && 10 % 3 == 1;

    std::cout << std::boolalpha
              << "3 + 4 > 6 && 10 % 3 == 1 = " << d << '\n';

    bool e = (3 + 4 > 6) && (10 % 3 == 1);

    std::cout << "versi berkurung = " << e << '\n';

    return 0;
}
