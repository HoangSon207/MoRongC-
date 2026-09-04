#include <iostream>

int tinhTong(int a, int b = 5) {
    return a + b;
}

int main() {
    std::cout << tinhTong(10) << std::endl;
    std::cout << tinhTong(10, 20) << std::endl;
    return 0;
}
