// Score Rater
// if statement demo

#include <iostream>
using namespace std;

int main()
{
  if (true)
    cout << "This is always displayed.\n\n";
  if (false)
    cout << "This is never displayed.\n\n";

  unsigned short int score;
    cout << "enter score (>0): ";
    cin >> score;
  if (score)
    cout << "Score is not zero.\n\n";
  if (score > 500)
    cout << "Score is over 500.\n\n";
  if (score == 1000)
  {
    cout << "Perfect 1000\n";
    cout << "Impressive\n";
  }
  if (score > 500)
  {
    cout << "Score at least 500.\n";
    if (score >= 1000)
      cout << "Score 1000 or more.\n";
  }
  return 0;
}
