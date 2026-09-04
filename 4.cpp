#include <iostream>

void tangGiaTri(int &value) {
    value += 10;
}

int main() {
    int num = 5;
    tangGiaTri(num);
    std::cout << num << std::endl;
    return 0;
}
