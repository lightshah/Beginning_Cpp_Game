// Play Again
// While loops

#include <iostream>
using namespace std;

int main()
{
  char again = 'y';
  while (again == 'y')
  {
    cout << "\n**Playing**\n\n";
    cout << "\nPlay again? (y/n):";
    cin >> again;
  }
  cout << "\n\nQuitting\n\n\n";

  return 0;
}
