#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;

int main()
{
  int num, total = 0;
  vector<int> mods;

  for (int i = 0; i < 10; i++) {
    cin >> num;
    num = num % 42;
    if(find(mods.begin(), mods.end(), num) != mods.end())
      ;
    else {
      mods.push_back(num);
      total++;
    }
  }
  cout << total;
}
