// Die Roller
// Random

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
  srand(time(0)); //seed random number generator based on current ctime
  int randomNumber = rand(); // generate random randomNumber
  int die = (randomNumber % 8) + 1; // get a number between 1 and 6
  cout << "You rolled a " << die << endl;

  return 0;

}
