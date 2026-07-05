#include <iostream>

int main() {
    int a1[3] = {1,2,3};

    int *a2[3];

    for(int i = 0; i < 3; i++) {
        a2[i] = &a1[i];
    }

    for(const auto addr : a2) {
        std::cout << *addr << std::endl;
    }

    return 0;
}