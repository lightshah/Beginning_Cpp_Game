#include <ctime>
#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    // Generate unique randomnumbers using curret ctime
    srand(time(NULL));
    // Generate randomnumber between 0 and 99
    unsigned int numberToGuess = rand() % 100;

    cout << "Guess 0 - 99" << endl;

    unsigned int playersNumber {};
    cin >> playersNumber;

    cout << "You guessed: "
            << playersNumber << endl
            << "It was:"
            << numberToGuess
            << endl;


    return 0;
}
