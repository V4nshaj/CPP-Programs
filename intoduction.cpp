/*introduction
no .h is included in header files for c++ prog
cin>>
cout<<
*/
#include <iostream>
using namespace std;
int main()
{
    int num, sqr;
    cout << "Enter a no.: " << endl;
    cin >> num;
    sqr = num * num;
    cout << "Square: " << sqr;
    return 0;
}