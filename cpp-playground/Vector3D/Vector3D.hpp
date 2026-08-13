#pragma once
#include <array>
#include <concepts>
#include <iostream>

template<typename T> 
concept AllowedTypes = std::same_as<T, int> ||
                       std::same_as<T, float> ||
                       std::same_as<T, double>;

template<AllowedTypes T>
class Vector3D;

template<AllowedTypes T>
std::ostream& operator<<(
    std::ostream& os,
    const Vector3D<T>& v
);

template<AllowedTypes T>
class Vector3D
{
public:
    std::array<T, 3> data;

    Vector3D();
    Vector3D(std::array<T, 3> data);

    T length();

    // Slicing

    // Indexing
    T operator[](int index);
    T operator[](int index) const;

    Vector3D<T> operator+(const Vector3D &v);

    Vector3D operator*(const Vector3D &v) {
        std::array<T, 3> data;
        for (int i = 0; i < 3; i++) {
            data[i] = v[i] * this->data[i];
        }
        return Vector3D(data);
    };


    // Ostream
    friend std::ostream& operator<< <T>(std::ostream& os, const Vector3D<T>& v);
};

#include "Vector3D.inl"