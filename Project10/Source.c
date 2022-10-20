#include <locale.h>
#include <stdio.h>
#include<math.h>

struct point {
	float x;
	float y;
	char name;
};


typedef struct point Point;

void put_point(Point z) {

	printf("point %c (%.1f, %.1f)\n", z.name, z.x, z.y);
}
double distance(Point z, Point w)
{

	return sqrt(pow(w.y - z.y, 2)) + (pow(w.y - z.y, 2));
}

Point seredina(Point q, Point e) {
	Point s;
	float xx, yy;
	xx = (q.y + e.y) / 2;
	yy = (q.y + e.y) / 2;
	s.name = 'S'; s.x = xx; s.y = yy;
	return s;
}
int main()
{
	setlocale(LC_ALL, "RUS");
		
	Point b, a, c, s;

	a = (Point){ 2.f, 4.f, 'A' };
	b.name = 'B'; b.x = 3; b.y = -2;
	c.name = 'C'; c.x = -2; c.y = -3;
	put_point(a);
	s = seredina(a, b);
	//printf("Расстояние между точками %c и %c = %f\n", a.name, b.name, distance(a, b));
	//printf("Расстояние между точками %c и %c = %f\n", c.name, b.name, distance(c, b));
	put_point(s);
	system("pause");
}
