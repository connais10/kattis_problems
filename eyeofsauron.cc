#include <iostream>

using namespace std;

int main()
{
    int left = 0, right = 0, i = 0;
    string input;
    getline(cin, input);

    for (i; i < input.length(); i++) {
        if (input[i] == '(') {
          i += 2;
          break;
          }
        else
          left++;
    }
    for (i; i < input.length(); i++) {
      if (input[i] == '|')
        right++;
    }

    if (left == right)
        cout << "correct";
    else
        cout << "fix";
}
