#include<iostream>

inline int tinhBinhPhuong(int x) {
    return x * x;
}

int main() {
    std::cout << tinhBinhPhuong(4) << std::endl;
    std::cout << tinhBinhPhuong(7) << std::endl;
    return 0;
}
