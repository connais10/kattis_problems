#include <iostream>

using namespace std;

int main()
{
  int n, m, highest = 0;
  cin >> n >> m;
  int probability[n+m];

  for (int t = 1; t <= (n+m); t++) {
    probability[t] = 0;
  }

  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= m; j++) {
      probability[i+j] += 1;
    }
  }
  for (int y = 1; y <= (n+m); y++) {
    if (probability[y] > highest)
      highest = probability[y];
      }
  for (int y = 1; y <= (n+m); y++) {
    if (probability[y] == highest)
      cout << y << endl;
  }



}
