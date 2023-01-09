#include <iostream>

using namespace std;

int main()
{
    string oldName, newName = "";
    cin >> oldName;

    for(int i = 0; i < oldName.length(); i++) {
      if (oldName[i] != oldName[i-1])
        newName += oldName[i];
    }
    cout << newName;
}
