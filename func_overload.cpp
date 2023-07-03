/*Function Overload*/
#include <iostream>
using namespace std;

float area(float r)
{
    float pi = 3.14;
    return pi * r * r;
}
int area(int b, int h)
{
    return (b * h) / 2;
}
float area(float l, float b)
{
    return l * b;
}
int main()
{
    float r, l, b;
    int bs, h;
    cout << "Enter radius of circle: ";
    cin >> r;
    cout << "Area of circle: " << area(r);
    cout << "\nEnter the base & height of the triangle: \n";
    cin >> bs >> h;
    cout << "Area of triangle: " << area(bs, h);
    cout << "\nEnter the length & breadth of the rectangle: \n";
    cin >> l >> b;
    cout << "Area of rectangle: " << area(l, b);
    return 0;
}
