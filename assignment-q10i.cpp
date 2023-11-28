#include <iostream>

using namespace std;

int sumOfSeries(int n) {
  int sum = 0;

  // Calculate the sum of squares up to n
  for (int i = 1; i <= n; ++i) {
    sum += i * i;
  }

  return sum;
}

int main() {
  int n;
  cout << "Enter the value of n: ";
  cin >> n;

  int result = sumOfSeries(n);
  cout << "Sum of the series 1^2 + 2^2 + 3^2 + ... + " << n << "^2 is: " << result << endl;

  return 0;
}
