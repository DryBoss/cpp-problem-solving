#include <iostream>

using namespace std;

int main() {
  int num1, num2;

  // Get input from the user
  cout << "Enter first number: ";
  cin >> num1;
  cout << "Enter second number: ";
  cin >> num2;

  // Calculate and display sum, difference, product, and quotient
  cout << "Sum: " << num1 + num2 << endl;
  cout << "Difference: " << num1 - num2 << endl;
  cout << "Product: " << num1 * num2 << endl;
  cout << "Quotient: " << num1 / num2 << endl;

  return 0;
}
