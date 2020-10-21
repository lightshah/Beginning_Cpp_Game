//Play Again 2.0
//Do loops

#include <iostream>
using namespace std;

int main()
{
  char again;
  do {
    cout << "\n***********Played**********";
    cout << "\nPlay again?(y/n)";
    cin >> again;
  } while(again == 'y');
  cout << "\nOkay. bye.\n"<< endl;
  return 0;
}
