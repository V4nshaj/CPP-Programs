/*Calculator*/
#include <stdlib.h>
#include <iostream>
#include <string>
using namespace std;
class calculator
{
    int a, b;
    public:
        calculator(int x, int y)//Constructor Created 
        {
            a = x;
            b = y;
        }
        int add()
        {
            return a + b;
        }
        int sub()
        {
            return a - b;
        }
        int mul()
        {
           return a * b;
        }
        int div()
        {
            return a / b;
        }
        int mod()
        {
            return a % b;
        }
        ~calculator()
        {
            cout << "\nDestructor Called\n";
        }
};
int main()
{
    int a, b, res;
    string ans = " ";
    char ch;
    while (ans != "no")
    {
        cout << "Options: +, -, *, /, %: \n";
        cin >> ch;
        cout << "Enter two no.s: \n";
        cin >> a >> b;
        calculator obj(a, b);
        if (ch == '+')
            cout<<"Sum of "<<a<<" and "<<b<<" is "<<obj.add();
        if (ch == '-')
            cout<<"Substraction of "<<a<<" and "<<b<<" is "<<obj.sub();
        if (ch == '*')
            cout<<"Multiplication of "<<a<<" and "<<b<<" is "<<obj.mul();
        if (ch == '/')
            cout<<"Division of "<<a<<" by "<<b<<" is "<<obj.div();
        if (ch == '%')
            cout<<"Modulus of "<<a<<" and "<<b<<" is "<<obj.mod();
        cout << "\nDo want to perform another operation: ";
        cin >> ans;  
        system("cls");      
    }
    return 0;
}
