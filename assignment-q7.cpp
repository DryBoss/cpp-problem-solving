#include <iostream>

using namespace std;

int main() {
  int year;

  // Get the year from the user
  cout << "Enter a year: ";
  cin >> year;

  // Check if it's a leap year based on the conditions
  bool isLeapYear = false;
  if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
    isLeapYear = true;
  }

  // Display the result
  if (isLeapYear) {
    cout << year << " is a leap year." << endl;
  } else {
    cout << year << " is not a leap year." << endl;
  }

  return 0;
}