/* pointer(*)->stores memory address
& -> address of operator
int *ptr = &num;->address of num is stored 
data type of the pointer needs to be same data type as variable*/
#include <iostream>
using namespace std;
int main()
{
    int n=10;
    int *ptr = &n;
    cout<<"Num: "<<n<<endl;
    cout<<"Pointer: "<<ptr;
    return 0;
} 