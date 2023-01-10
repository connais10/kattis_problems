#include <iostream>

using namespace std;

int main()
{
  int n, k, o, appliances;
  cin >> n;

  for (int i = 0; i < n; i++) {
    appliances = 0;
    cin >> k;
    for (int j = 0; j < k; j++) {
      cin >> o;
      if (j == (k-1))
        appliances += o;
      else
        appliances += (o-1);
    }
    cout << appliances << endl;
  }
}
