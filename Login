#include <iostream>
#include <string>
using namespace std;

int main() {
    string correctPassword = "1234";
    string userGuess;
    int attempts = 3;

    cout << "Guess the password. You have 3 attempts." << endl;

    for (int i = 0; i < attempts; ++i) {
        cout << "Your guess: ";
        cin >> userGuess;

        if (userGuess == correctPassword) {
            cout << "Congratulations! The password is correct." << endl;
            return 0;
        } else {
            cout << "Incorrect password. ";
            if (i < attempts - 1) {
                cout << "You have " << (attempts - i - 1) << " attempts left." << endl;
            }
        }
    }

    cout << "Sorry! You've used all your attempts. The correct password was: " << correctPassword << endl;
    return 0;
}
