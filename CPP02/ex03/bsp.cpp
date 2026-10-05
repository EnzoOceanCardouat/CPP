#include "Point.hpp"

bool bsp(Point const a, Point const b, Point const c, Point const point) {
	Fixed line1 = (b.getX() - a.getX()) * (point.getY() - a.getY()) - (b.getY() - a.getY()) * (point.getX() - a.getX());
	Fixed line2 = (c.getX() - b.getX()) * (point.getY() - b.getY()) - (c.getY() - b.getY()) * (point.getX() - b.getX());
	Fixed line3 = (a.getX() - c.getX()) * (point.getY() - c.getY()) - (a.getY() - c.getY()) * (point.getX() - c.getX());

	if (line1 == Fixed(0) || line2 == Fixed(0) || line3 == Fixed(0))
		return false;

	bool allNegative = (line1 < Fixed(0)) && (line2 < Fixed(0)) && (line3 < Fixed(0));
	bool allPositive = (line1 > Fixed(0)) && (line2 > Fixed(0)) && (line3 > Fixed(0));

	return allNegative || allPositive;
}
