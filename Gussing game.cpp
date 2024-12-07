#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0)); // Seed the random number generator
    int randomNumber = rand() % 11; // Generate a random number between 0 and 10
    int guess;
    int attempts = 0;

    cout << "Welcome to the Number Guessing Game!" << endl;

    do {
        cout << "Enter your guess (0-10): ";
        cin >> guess;
        attempts++;

        if (guess < randomNumber) {
            cout << "Higher!" << endl;
        } else if (guess > randomNumber) {
            cout << "Lower!" << endl;
        } else {
            cout << "Congratulations! You guessed the number in " << attempts << " attempts." << endl;
        }
    } while (guess != randomNumber);

    return 0;
}
