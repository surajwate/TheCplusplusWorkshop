// Exercise 30: Incrementing Pointers

// Stepping a pointer through an array and printing each arrray elements.

/* --------------------------------------------------------
#include <iostream>
using namespace std;
int main()
{
    int a[5]{ 10, 20, 30, 40, 50 };
    int *p;

    for (p = &a[0]; p < &a[5]; p = p + 1)
    {
        cout << *p << " ";
    }
    cout << endl;
    return 0;
}

------------------------------------------------------------*/

#include <iostream>
using namespace std;
int main()
{
    int a[]{10, 20, 30, 40, 50};
    int *p;
    for (p = a; p < a + sizeof(a) / sizeof(a[0]); ++p)
    {
        cout << *p << " ";
    }
    cout << endl;
    return 0;
}