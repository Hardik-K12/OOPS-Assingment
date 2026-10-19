
#include <iostream>
using namespace std;

class Shape
{
public:
    virtual double area() = 0;

    virtual ~Shape() {}
};

class Circle : public Shape
{
public:
    double area() override
    {
        return 3.14159 * 3 * 3;
    }
};

class Rectangle : public Shape
{
public:
    double area() override
    {
        return 5 * 4;
    }
};

int main()
{
    Circle c;
    Rectangle r;

    Shape *ptr;

    ptr = &c;
    cout << "Area of circle = " << ptr->area() << endl;

    ptr = &r;
    cout << "Area of rectangle = " << ptr->area() << endl;

    return 0;
}
