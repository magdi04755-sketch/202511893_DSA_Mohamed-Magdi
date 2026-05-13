#include <iostream>
#include <vector>
using namespace std;

int main() {

    int chosenNumber = 7;      // chosen number
    int userGuess = 0;         // user's input
    vector<int> guesses;       // array/list to store guesses

    // loop until the correct number is guessed
    while (userGuess != chosenNumber) {

        cout << "Enter a number: ";
        cin >> userGuess;

        // store every guess
        guesses.push_back(userGuess);

        // compare the guess
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

    // display all guesses
    cout << "\nAll guesses entered:" << endl;

    for (int i = 0; i < guesses.size(); i++) {
        cout << guesses[i] << endl;
    }

    return 0;
}
