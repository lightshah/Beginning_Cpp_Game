#include <iostream>
using namespace std;

int main(int argc, const char* argv[])
{
    cout << "number : " << endl;
    float number1 = 0.0f;
    cin >> number1;

    cout << "+,-,*,/?:" << endl;
    char op1 = '0';
    cin >> op1;

    cout << "number 2:" << endl;
    float number2 = 0.0f;
    cin >> number2;

    float result = 0.0;

    if (op1 == '+')
    {
      result = number1 + number2;
    }
    else if (op1 == '-')
    {
      result = number1 - number2;
    }
    else if (op1 == '*')
    {
        result = number1 * number2;
    }
    else if (op1 == '/')
    {
      result = number1 / number2;
    }
    else
    {
      return 0;
    }
cout << "result = "<< result << endl;
  return 0;
}
