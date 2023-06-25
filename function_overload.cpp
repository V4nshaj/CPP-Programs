#include <iostream>
using namespace std;
int sum(int a, int b)
{
    cout<<"Sum of integers: "<< a+b<< endl;
}
double sum(double a, double b)
{
    cout<<"Sum of double: "<< a+b << endl;
}
int main()
{
    sum(5,4);
    sum(5.4,9.9);
    return 0;
}