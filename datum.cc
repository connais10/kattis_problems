#include <iostream>

using namespace std;

int main()
{
  int d, m, yearCode, monthCode, centCode = 6, leapCode = 0, answer;
  int year = 9;
  cin >> d >> m;

  yearCode = (year + (year / 4)) % 7;

  switch (m) {
    case 1:
      monthCode = 0;
      break;
    case 2:
      monthCode = 3;
      break;
    case 3:
      monthCode = 3;
      break;
    case 4:
      monthCode = 6;
      break;
    case 5:
      monthCode = 1;
      break;
    case 6:
      monthCode = 4;
      break;
    case 7:
      monthCode = 6;
      break;
    case 8:
      monthCode = 2;
      break;
    case 9:
      monthCode = 5;
      break;
    case 10:
      monthCode = 0;
      break;
    case 11:
      monthCode = 3;
      break;
    case 12:
      monthCode = 5;
  }
  answer = (yearCode + monthCode + centCode + d - leapCode) % 7;

  switch (answer) {
    case 0:
      cout << "Sunday";
      break;
    case 1:
      cout << "Monday";
      break;
    case 2:
      cout << "Tuesday";
      break;
    case 3:
      cout << "Wednesday";
      break;
    case 4:
      cout << "Thursday";
      break;
    case 5:
      cout << "Friday";
      break;
    case 6:
      cout << "Saturday";
      break;
  }

}
