#include <iostream>

int tinhTong(int a, int b) {
    return a + b;
}

double tinhTong(double a, double b) {
    return a + b;
}

int main() {
    std::cout << tinhTong(3, 4) << std::endl;
    std::cout << tinhTong(1.5, 2.5) << std::endl;
    return 0;
}
