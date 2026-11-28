#include <iostream>

int main() {
    int i = 5;


    int pre = ++i;

    std::cout << "pre-increment -> i = " << i
<< ", pre = " << pre << '\n';

    i = 5;


    int post = i++;

    std::cout << "post-increment -> i = " << i
     << ", post = " << post << '\n';

    int j = 10;


    int decre = --j;

    std::cout << "pre-decrement -> j = " << j
     << ", decre = " << decre << '\n';


    for (int k = 0; k < 3; ++k) {
        std::cout << "iterasi " << k << '\n';
    }

    return 0;
}
