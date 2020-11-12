#include <iostream>

using namespace std;

class  Wektor2D
{
public:

	Wektor2D(double x, double y)
	{
		a = x;
		b = y;
	}

	Wektor2D()
	{
		a = 0;
		b = 0;
	}

	void setX(double x) { a = x; }

	void setY(double y) { b = y; }

	double  getX() 
	{ 
		return a;
	}

	double getY() 
	{ 
		return b;
	}
	
	void Drukuj(void)
	{
		cout << "wektor [" << a << " " << b << "]" << endl;
	}

	double a;
	double b;
	
};


Wektor2D operator+( Wektor2D& first,  Wektor2D& second)
{
	Wektor2D tmp;
	tmp.setX(first.getX() + second.getX());
	tmp.setY(first.getY() + second.getY()); 
	return tmp;
}

double operator*(Wektor2D& first, Wektor2D& second)
{
	double tmp = 0;
	tmp=(first.getX() * second.getX());
	tmp+=(first.getY() * second.getY()); 
	return tmp;
}
