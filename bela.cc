#include <iostream>


using namespace std;

int main()
{
  int n, total = 0;
  char b, num, suit;
  cin >> n >> b;
  char numbers[8] = {'7', '8', '9', 'T', 'J', 'Q', 'K', 'A'};
  int dom[8] = {0, 0, 14, 10, 20, 3, 4, 11};
  int nonDom[8] = {0, 0, 0, 10, 2, 3, 4, 11};


  for (int i = 0; i < (4*n); i++) {
    cin >> num >> suit;
    for (int j = 0; j < 8; j++) {
      if ((num == numbers[j]) && (suit == b)) {
        total += dom[j];
      }
      else if (num == numbers[j]) {
        total += nonDom[j];
}
    }
  }
  cout << total;
}
