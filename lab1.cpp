#include <iostream>

using namespace std;

class Wektor2D
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

    double getX() { return a; }

    double getY() { return b; }

    void Drukuj(void) { cout << "wektor [" << a << " " << b << "]" << endl; }

    double a;
    double b;
};

Wektor2D operator+(Wektor2D& first, Wektor2D& second)
{
    Wektor2D tmp;
    tmp.setX(first.getX() + second.getX());
    tmp.setY(first.getY() + second.getY());
    return tmp;
}

double operator*(Wektor2D& first, Wektor2D& second)
{
    double tmp = 0;
    tmp        = (first.getX() * second.getX());
    tmp += (first.getY() * second.getY());
    return tmp;
}

int main()
{
    Wektor2D v1{};
    v1.setX(1);
    v1.setY(1);
    v1.Drukuj();
    double   x1 = v1.getX();
    double   y1 = v1.getY();
    Wektor2D v2{2, 2};
    v2.Drukuj();
    Wektor2D sum{};
    sum = v1 + v2;
    sum.Drukuj();
    double prod = v1 * v2;
    cout << prod << endl;
    return 0;
}