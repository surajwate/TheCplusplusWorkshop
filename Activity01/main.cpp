// Writing your own C++ Application

#include <iostream>
#include <string>

#define AGE_20 20
#define AGE_35 35
#define AGE_50 50
#define AGE_60 60
#define CHILD "child"
#define YOUNG "young"
#define MIDDLEAGE "adult"
#define OLD "old"
#define RETIRED "retired"

std::string group(int age)
{
    if (age < AGE_20)
    {
        return CHILD;
    }
    else if (age < AGE_35)
    {
        return YOUNG;
    }
    else if (age < AGE_50)
    {
        return MIDDLEAGE;
    }
    else if (age < AGE_60)
    {
        return OLD;
    }
    else
    {
        return RETIRED;
    }
}

int main()
{
    std::string name;
    int age;
    std::cout << "Please enter your name: ";
    getline(std::cin, name);
    std::cout << "Please enter your age: ";
    std::cin >> age;
    std::cout << std::endl;
    std::cout << name << " has been assigned to " << group(age) << " group.";
}
