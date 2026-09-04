#include <iostream>

int main() {
    int* ptr = new int(20);
    std::cout << *ptr << std::endl;
    delete ptr;
    ptr = NULL;

    int* arr = new int[3];
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    std::cout << arr[0] << " " << arr[1] << " " << arr[2] << std::endl;
    delete[] arr;
    arr = NULL;

    return 0;
}
