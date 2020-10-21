// Tic Tac Toe
// Multidimensional arrays
#include <iostream>

using namespace std;

int main()
{
  const int ROWS =3;
  const int COLUMNS = 3;
  char board[ROWS][COLUMNS] = { {'O', 'X', 'O'},
                                {' ', 'X', 'X'},
                                {'X', 'O', 'O'}};
  cout << "Here's the board\n";
  for (int i=0; i< ROWS; i++)
  {
    for (int j=0;j<COLUMNS;j++)
      cout << board[i][j];
    cout << endl;
  }

  cout << "\n\n'X' moves to empty location\n\n";
  board[1][0]='X';
  cout << "Now the board is\n";
  for(int i=0;i<ROWS;i++)
  {
    for(int j=0;j<COLUMNS;j++)
      cout << board[i][j];
    cout << endl;
  }

  return 0;
}
