// Designer Network
// Logic opertor demo

#include <iostream>
#include <string>
using namespace std;

int main()
{
  cout << "\tGame Designer's Network\n";
  int security =0;

  string username;
  cout << "\nUsername: ";
  cin >> username;

  string password;
  cout << "\nPassword: ";
  cin >> password;

  if (username == "Boss" && password == "nowhere")
  {
    cout << "\n\tHello Boss!!!\n\n";
    security = 5;
  }
  if (username == "Luigi" && password == "bros")
  {
    cout << "\n\tHello Luigi!!!\n\n";
    security = 5;
  }
  if (username == "guest" && password == "guest")
  {
    cout << "\n\tWelcome guest\n\n";
    security = 1;
  }
  if (!security)
    cout << "\n\tLogin failed\n\n";
  return 0;
}
