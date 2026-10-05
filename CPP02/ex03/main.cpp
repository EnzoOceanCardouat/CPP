#include "Point.hpp"

int main() {
	Point a(0.0f, 0.0f);
	Point b(10.0f, 0.0f);
	Point c(5.0f, 10.0f);

	Point inside(5.0f, 3.0f);
	Point onEdge(5.0f, 0.0f);
	Point onVertex(0.0f, 0.0f);
	Point outside(15.0f, 5.0f);

	std::cout << "Inside : " << bsp(a, b, c, inside) << std::endl;
	std::cout << "On edge : " << bsp(a, b, c, onEdge) << std::endl;
	std::cout << "On vertex : " << bsp(a, b, c, onVertex) << std::endl;
	std::cout << "Outside : " << bsp(a, b, c, outside) << std::endl;
	return 0;
}
