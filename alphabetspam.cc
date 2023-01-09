#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    getline(cin, s);
    double upper = 0, lower = 0, symbols = 0, whitespace = 0;
    int len = s.length();

    for (int i = 0; i < len; i++) {
      if ((int(s[i]) > 64) && (int(s[i]) < 91))
        upper++;
      if ((int(s[i]) > 96) && (int(s[i]) < 123))
        lower++;
      if ((int(s[i]) > 32) && (int(s[i]) < 65) ||
      ((int(s[i]) > 122) && (int(s[i]) < 127)) ||
      ((int(s[i]) > 90) && (int(s[i]) < 95)) || (int(s[i]) == 96))
        symbols++;
      if (int(s[i]) == '_')
        whitespace++;
    }

    cout << whitespace / len << endl << lower / len
         << endl << upper / len << endl << symbols / len;
}
