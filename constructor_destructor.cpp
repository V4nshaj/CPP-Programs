/*constructor & destructor:
no return type
automatically called when object is created
puclic members of a class*/
/*destructor: ~tilde before destructor delocate memory allocation*/
//set value of a variable
#include <iostream>
using namespace std;
class cls
{
    int n;
    public:
        cls()
        {
            cout<<"Value of a no.: "<<n;
            cout<<"\nConstructor called: "<<endl;
            n=0;
            cout<<"Value of no. after constructor call: "<<n;
        }
        void get()//for setting the value of number 
        {
            n=10;
            cout<<"\nValue of no. after get call: "<<n;
        }
        ~cls()//destructor
        {
            cout<<"\nDestructor called! ";  //it is advised not to write anything inside the destructor to know destructor has been called
        }
};
int main()
{
    cls obj;//cons & dest will be called automatically
    obj.get();
    return 0;
}