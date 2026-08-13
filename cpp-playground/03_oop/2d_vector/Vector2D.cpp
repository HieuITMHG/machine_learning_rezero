#include "Vector2D.h"
#include <iostream>

Vector2D Vector2D::operator+(const Vector2D& other) const {
    return Vector2D(x + other.x, y + other.y);
}

int main() {

    Vector2D vec1(1,2);
    Vector2D vec2(2,3);

    Vector2D vec3 = vec1 + vec2;

    std::cout << vec3.x;

    return 0;
}