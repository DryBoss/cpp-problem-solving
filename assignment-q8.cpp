#include <iostream>

using namespace std;

int main() {
  int number;
  bool isPrime = true;

  // Get a positive integer from the user
  cout << "Enter a positive integer: ";
  cin >> number;

  // Check if the number is less than 2
  if (number <= 1) {
    isPrime = false;
  } else {
  // Check for factors other than 1 and the number itself
    for (int i = 2; i * i <= number; ++i) {
      if (number % i == 0) {
        isPrime = false;
        break;
      }
    }
  }

  // Display the result
  if (isPrime) {
    cout << number << " is a prime number." << endl;
  } else {
    cout << number << " is not a prime number." << endl;
  }
  return 0;
}
