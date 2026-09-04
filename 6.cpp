#include <iostream>

class ToaDo {
public:
    int x, y;

    ToaDo(int xVal = 0, int yVal = 0) : x(xVal), y(yVal) {}

    ToaDo operator+(const ToaDo &other) {
        return ToaDo(x + other.x, y + other.y);
    }
};

int main() {
    ToaDo p1(1, 2), p2(3, 4);
    ToaDo p3 = p1 + p2;
    std::cout << p3.x << " " << p3.y << std::endl;
    return 0;
}
