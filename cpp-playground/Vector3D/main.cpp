#include <iostream>
#include "Vector3D.hpp"
#include <array>


int main() {
	std::array<int,3> data = {1,2,3};

	Vector3D vec1(data);
	Vector3D vec2(data);

	std::cout << vec1[1] << std::endl;
	std::cout << vec1 + vec2;
	std::cout << vec1 * vec2;

	return 0;
}