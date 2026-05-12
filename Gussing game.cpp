#include <iostream>
#include <vector>

using namespace std;

int main() {

    // Chosen number
    int chosenNumber = 7;

    // Variable for user input
    int userGuess = 0;

    // Array/List to store all guesses
    vector<int> guesses;

    // While loop continues until correct guess
    while (userGuess != chosenNumber) {

        // Ask user for a number
        cout << "Enter a number: ";
        cin >> userGuess;

        // Store the value in the list
        guesses.push_back(userGuess);

        // Compare the guess
        if (userGuess > chosenNumber) {
            cout << "Too high" << endl;
        }
        else if (userGuess < chosenNumber) {
            cout << "Too low" << endl;
        }
        else {
            cout << "Correct" << endl;
        }
    }

    // Display all guesses after loop finishes
    cout << "\nAll guesses entered:" << endl;

    for (int i = 0; i < guesses.size(); i++) {
        cout << guesses[i] << endl;
    }

    return 0;
}
