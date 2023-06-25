#include <iostream>
using namespace std;
int sum(int, int);
int main()
{
    int i = 1;
    while (++i <= 5)
        cout << i++;
    return 0;
}