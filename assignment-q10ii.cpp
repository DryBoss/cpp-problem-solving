#include <iostream>
long long sumOfSeries(int n) {
 long long sum = 0;
 // Calculate the sum of products of three consecutive numbers
 for (int i = 1; i <= n; ++i) {
 sum += i * (i + 1) * (i + 2);
 }
 return sum;
}
int main() {
 int n;
 std::cout << "Enter the value of n: ";
 std::cin >> n;
 long long result = sumOfSeries(n);
 std::cout << "Sum of the series 1*2*3 + 2*3*4 + 3*4*5 + ... up to " << n << " terms is: " <<
result << std::endl;
 return 0;
}