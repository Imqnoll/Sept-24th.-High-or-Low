#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Hilo.h"

using namespace std;

int main()
{
    // Seed the random number generator
    srand(time(0));

    // Game is from 1 to 100
    const int N = 100;

    // Maximum number of guesses
    const int MAX_GUESSES = 15;

    // Generate random number
    int randomNumber = getRandomNumberBetweenBAndN(N);

    // Uncomment to cheat
    // cout << "The random number is: " << randomNumber << endl;

    int userGuess = -999;
    int numberOfGuesses = 0;

    cout << "Welcome to the Hi-Lo Game!" << endl;
    cout << "I am thinking of a number between 1 and 100." << endl;
    cout << "You have 15 guesses." << endl;

    while (userGuess != randomNumber && numberOfGuesses < MAX_GUESSES)
    {
        cout << "Enter your guess (1-100): ";
        cin >> userGuess;

        numberOfGuesses++;

        if (userGuess > randomNumber)
        {
            cout << "Too high!" << endl;
        }
        else if (userGuess < randomNumber)
        {
            cout << "Too low!" << endl;
        }
        else
        {
            cout << "Correct!" << endl;
            cout << "You got it in "
                << numberOfGuesses << " guesses!" << endl;
        }

        cout << "Guesses remaining: "
            << MAX_GUESSES - numberOfGuesses << endl;
    }

    // If they used all 15 guesses without getting it
    if (userGuess != randomNumber)
    {
        cout << endl;
        cout << "Game over!" << endl;
        cout << "You used all 15 guesses." << endl;
        cout << "The number was: " << randomNumber << endl;
    }

    return 0;
}
