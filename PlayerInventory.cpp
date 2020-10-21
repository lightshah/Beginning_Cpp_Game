// Hero's Inventory
// Demonstrate arrays

#include <iostream>
#include <string>

using namespace std;

int main()
{
  const int MAX_ITEMS = 10;
  string inventory[MAX_ITEMS];

  int numItems = 0;
  inventory[numItems++] = "sword";
  inventory[numItems++] = "armor";
  inventory[numItems++] = "shield";

  cout << "Your items:\n";
  for (int i = 0; i < numItems; ++i)
    cout << inventory[i] << endl;

  cout << "\nYou trade your sword for battle axe";
  inventory[0] = "battle axe";
  cout << "\nYour items:\n";
  for (int i =0; i < numItems; ++i)
    cout << inventory[i] << endl;

  cout << "\nYou find healing potion\n";
  if (numItems < MAX_ITEMS)
    inventory[numItems++] = "healing potion";
  else
    cout << "Bag full";
  cout << "\nYour items:\n";
  for (int i =0; i < numItems; ++i)
    cout << inventory[i] << endl;
 return 0;
}
