//Area rectangle using classes
#include <iostream>
using namespace std;
class Rectangle
{
    float l,b;//if no specifier is mention compiler itself allocates private specifier to member function
    public:/*we cannot access private members of the class in other function or in any 
    other class. For that we need a public member func to get the values of len and bred*/
    void get_val(float x, float y)
    {
        l=x;
        b=y;
    }
    void area()
    {
        cout<<"Area: "<<(l*b)<<endl;
    }
};
int main()
{
    Rectangle obj;//cleating object of class
    obj.get_val(10,10);
    obj.area();
    return 0;
}