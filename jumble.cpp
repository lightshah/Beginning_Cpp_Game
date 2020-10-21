// Word Jumble
// Can ask for hint
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;
int main()
{
  enum fields {WORD, HINT, NUM_FIELDS};
  const int NUM_WORDS = 5;
  const string WORDS[NUM_WORDS][NUM_FIELDS] =
  {
    {"wall", "Do you feel you’re banging your head against something?"},
    {"glasses", "These might help you see the answer."},
    {"labored", "Going slowly, is it?"},
    {"persistent", "Keep at it."},
    {"jumble", "It’s what the game is all about."}
  };
bool play = true;
int score = 0;
while(play == true)
{
  srand(time(0));
  int choice = (rand()%NUM_WORDS);
  string theWord = WORDS[choice][WORD];
  string theHint = WORDS[choice][HINT];
  string jumble = theWord;
  int length = jumble.size();
  int scoreTemp = score + length;
  for (int i=0; i<length;i++)
  {
    int index1 = {rand()%length};
    int index2 = {rand()%length};
    char temp = jumble[index1];
    jumble[index1] = jumble[index2];
    jumble[index2] = temp;
  }
  cout << "\t\t\tWelcome to Word Jumble!\n\n";
  cout << "Unscramble the letters to make a word.\n";
  cout << "Enter ‘hint’ for a hint.\n";
  cout << "Enter ‘quit’ to quit the game.\n\n";
  cout << "The jumble is: " << jumble;

  string guess;
  cout << "\nYour guess?\n";
  cin >> guess;

  while((guess!= theWord) && (guess!="quit"))
  {
    if (guess == "hint")
      cout << theHint;
    else
      cout << "wrong";
    cout <<"\n\nYour guess?\n";
    cin >> guess;
  }
  if (guess == theWord)
    cout << "\nThat’s it! You guessed it!\n";
    cout << "\nYour Score : " << scoreTemp << endl;
cout << "Play again? Y/N ";
score = scoreTemp;
string opt;
cin >> opt;
if (opt == "y")
    play = true;
else
    play = false;
}
return 0;
}
