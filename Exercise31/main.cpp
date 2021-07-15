// Exercise 31: Pointers to Pointers
// Manipulate an array of pointers by using a pointer to a pointer.

#include <iostream>
using namespace std;
int main()
{
    char const* alphabet[26]{"alpha", "bravo", "charlie", "delta", "echo", "foxtrot"};

    for (char const** p = alphabet; *p != nullptr; ++p)
    {
        cout << *p << " ";
    }
    cout << endl;

    return 0;
}
