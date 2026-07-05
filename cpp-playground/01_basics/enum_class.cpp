#include <iostream>

enum Status {
    START,
    PENDING,
    PROCESSED,
    ENDED
};

enum class Color {
    RED,
    YELLOW,
    BLUE
};

int main() {

    Status st = PENDING;

    std::cout << st << std::endl;

    Color cl1 = Color::RED;

    std::cout << static_cast<int>(cl1) << std::endl;

    return 0;
}