#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    // Seed the random number generator with the current time
    srand(static_cast<unsigned>(time(0)));

    // Generate a random number between 1 and 100
    int random_number = rand() % 100 + 1;

    // Initialize a variable to keep track of the number of guesses
    int num_guesses = 0;
    int guess;

    // Welcome message
    cout << "Welcome to the Guess the Number game!" << endl;
    cout << "I'm thinking of a number between 1 and 100. Try to guess it." << endl;

    while (true) {
        // Ask the user for their guess
        cout << "Enter your guess: ";
        cin >> guess;

        // Increment the number of guesses
        num_guesses++;

        // Check if the guess is correct
        if (guess == random_number) {
            cout << "Congratulations! You guessed the number " << random_number << " in " << num_guesses << " guesses." << endl;
            break;
        } else if (guess < random_number) {
            cout << "Too low. Try again." << endl;
        } else {
            cout << "Too high. Try again." << endl;
        }
    }

    return 0;
}