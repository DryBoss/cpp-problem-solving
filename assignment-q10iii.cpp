#include <iostream>

using namespace std;

int sumOfSeries(int n) {
  int sum = 0;

  // Calculate the sum of cube up to n
  for (int i = 1; i <= n; ++i) {
    sum += i * i * i;
  }

  return sum;
}

int main() {
  int n;
  cout << "Enter the value of n: ";
  cin >> n;

  int result = sumOfSeries(n);
  cout << "Sum of the series 1^3 + 2^3 + 3^3 + ... + " << n << "^3 is: " << result << endl;

  return 0;
}
