// Creating c Number-Guessing Game Using Loops and Conditional Statements

#include <iostream>
#include <string>

int main()
{
    int guessCount;
    int minNumber;
    int maxNumber;
    int randomNumber;
    int guess;

    std::cout << "Enter the number of guesses: ";
    std::cin >> guessCount;

    std::cout << "Enter the maximum number: ";
    std::cin >> maxNumber;

    std::cout << "Enter the minimum number: ";
    std::cin >> minNumber;

    randomNumber = rand () % (maxNumber - minNumber + 1);

    for (int i = 0; i < guessCount; ++i)
    {
        std::cout << "Enter your guess: ";
        std::cin >> guess;
        if (guess < randomNumber)
        {
            std::cout <<"Enter higher number.";
        }
        else if (guess > randomNumber)
        {
            std::cout <<"Enter lower number.";
        }
        else 
        {
            std::cout <<"You are correct.";
            break;
        }
    }


}