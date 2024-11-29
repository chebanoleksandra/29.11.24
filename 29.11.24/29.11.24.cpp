#include <iostream>
using namespace std;

class Point
{
	int x;
	int y;
public:
	Point()=default;
	Point(int a, int b) :x(a), y(b) {};
	void Init(int a, int b)
	{
		x = a;
		y = b;
	}
	void Print()const
	{
		cout << "x = " << x << "\ty = " << y << endl;
	}
	int GetX()const
	{
		return x;
	}
	int GetY()const
	{
		return y;
	}
	Point Sub(Point& b)const
	{
		return Point(x - b.x, y - b.y);
	}
	Point Add(Point& b)const
	{
		return Point(x + b.x, y + b.y);
	}
	Point Mult(Point& b)const
	{
		return Point(x * b.x, y * b.y);
	}
	Point Div(Point& b)const
	{
		return Point(x / b.x, y / b.y);
	}
};
int main()
{
	Point a(10, 20);
}
