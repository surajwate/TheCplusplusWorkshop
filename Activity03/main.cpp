// Activity 3: Sign-Up Application

#include <iostream>
#include <string>
#include <vector>

class Person
{
public:
    std::vector<std::string> userNames{};
    std::vector<int> userAge{};

    void addRecord()
    {
        std::string name = "";
        std::cout << "Add User. Please enter user name and age:" << std::endl
                  << "Name: ";
        std::getline(std::cin, name); // This read will give us just a newline sign from previous I/O operations
        std::getline(std::cin, name); // This will give us the actual name

        std::string age = "";
        std::cout << "Age: ";
        std::getline(std::cin, age); // We don't need to perform an additional read here

        try
        {
            userAge.push_back(std::stoi(age));
        }
        catch (std::invalid_argument)
        {
            std::cout << "Given age in not a valid number." << std::endl
                      << "User record not added." << std::endl;
            return;
        }

        userNames.push_back(name); // Add the name record after we have successfully added the age record
        std::cout << "User record added successfully.";
    }

    void fetchRecord()
    {
        int userID;
        std::cout << "\nPlease enter user ID:" << std::endl
                  << "User ID: ";
        std::cin >> userID;
        std::cout << "User Name: " << userNames[userID] << std::endl;
        std::cout << "User Age: " << userAge[userID] << std::endl;
    }
};

int main()
{
    std::cout << "User SignUp Application" << std::endl
              << std::endl;
    bool run = true;
    int option;
    Person office;
    while (run)
    {
        std::cout << "\nPlease select an option:" << std::endl
                  << "1: Add Record" << std::endl
                  << "2: Fetch Record" << std::endl
                  << "3: Quit" << std::endl
                  << std::endl
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