#include "Vector3D.hpp"
#include <array>
#include <iostream>
#include <math.h>

template<AllowedTypes T>
Vector3D<T>::Vector3D(std::array<T,3> data): data(data){};

template<AllowedTypes T>
T Vector3D<T>::length() {
	return sqrt(pow(this->data[0], 2) + pow(this->data[1], 2) + pow(this->data[2], 2));
};

template<AllowedTypes T>
T Vector3D<T>::operator[](int index) {
	return this->data[index];
}

template<AllowedTypes T>
T Vector3D<T>::operator[](int index) const {
	return this->data[index];
}

template<AllowedTypes T>
Vector3D<T> Vector3D<T>::operator+(const Vector3D<T> &v) {
	std::array<T, 3> data;
	for(int i = 0; i < 3; i++) {
		data[i] = v[i] + (*this)[i];
	}

	return Vector3D<T>(data);
};

template<AllowedTypes T>
std::ostream& operator<<(std::ostream& os, const Vector3D<T> &v) {
	os << "("
          << v[0] << ","
          << v[1] << ","
          << v[2] << ")";

	return os;
}