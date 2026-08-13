#pragma once

class Vector2D
{
public:
    int x, y;

    Vector2D(int x, int y)
        : x(x), y(y)
    {
    }

    Vector2D operator+(const Vector2D& other) const;
};