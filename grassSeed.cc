#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
  int l;
  double price, d1, d2, total = 0, c, area;
  cin >> c >> l;

  for (int i = 0; i < l; i++) {
    cin >> d1 >> d2;
    area = (d1 * d2);
    total += area;
  }
  price = c * total;
  cout << setprecision(10) << price;
}
