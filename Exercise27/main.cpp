// Exercise 27: Dereferencing nullptr

#include <iostream>
using namespace std;
int main()
{
    int *p1 = nullptr;
    cout << "p1 = " << p1 << endl;
    *p1 = 22;
    return 0;
}