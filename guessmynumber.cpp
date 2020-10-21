// guess my number

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
  srand(time(0));// seed random number

  int theNumber = rand() % 100 + 1; // random number between 1 and 100
  int tries =0, guess;

  cout << "\tWelcome to guess number\n\n";

  do
  {
    cout <<"Enter a guess (1 - 100): ";
    cin >> guess;
    ++tries;

    if (guess > theNumber)
      cout << "Too high!!!\n\n";
    if (guess < theNumber)
      cout << "Too low!!!\n\n";
  }
  while (guess != theNumber);

  cout << "\nCorrect in " << tries <<" guesses!\n";

  return 0;
}
