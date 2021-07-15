// Activity 3: Sign-Up Application

#include <iostream>
#include <string>
#include <vector>

class Person
{
public:
    std::string name;
    int age;
    std::vector<std::string> userNames{};
    std::vector<int> userAge{};

    void addRecord()
    {
        std::cout << "Add User. Please enter user name and age:" << std::endl
                  << "Name: ";
        std::cin >> name;
        userNames.push_back(name);
        std::cout << "Age: ";
        std::cin >> age;
        userAge.push_back(age);
        std::cout << std::endl
                  << "User record added successfully.";
    }

    void fetchRecord()
    {
        int userID;
        std::cout << "Please enter user ID:" << std::endl
                  << "User ID: ";
        std::cin >> userID;
        std::cout << "User Name: " << userNames[userID];
        std::cout << "User Age: " << userAge[userID];
    }
};

int main()
{
    std::cout << "User SignUp Application" << std::endl << std::endl;
    bool run = true;
    int option;
    Person office;
    while (run)
    {
        std::cout << "Please select an option:" << std::endl
                  << "1: Add Record" << std::endl
                  << "2: Fetch Record" << std::endl
                  << "3: Quit" << std::endl << std::endl
                  << "Enter option: ";

        std::cin >> option;
        if (option == 1)
        {
            office.addRecord();
        }
        else if (option == 2)
        {
            office.fetchRecord();
        }
        else if (option == 3)
        {
            run = false;
        }
    }
}