// Exercise 33: Bad References

#include <iostream>

int main()
{
    char* p = nullptr;
    char& r = *p;
    r = '!';
    return 0;
}