#include <iostream>

using namespace std;

int main()
{
  int a, b, newa = 0, newb = 0;
  cin >> a >> b;

  while ((a > 0) && (b > 0)) {
    newa *= 10;
    newb *= 10;
    newa += (a % 10);
    newb += (b % 10);
    a /= 10;
    b /= 10;
  }
  if (newa > newb)
    cout << newa;
  else
    cout << newb;

}
