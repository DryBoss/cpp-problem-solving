#include <iostream>

using namespace std;

int main() {
  const double pi = 3.1416;
  double radius;

  // Get the radius from the user
  cout << "Enter the radius of the circle: ";
  cin >> radius;

  // Calculate area and circumference
  double area = pi * radius * radius;
  double circumference = 2 * pi * radius;

  // Display the calculated values
  cout << "Area of the circle: " << area << endl;
  cout << "Circumference of the circle: " << circumference << endl;
  
  return 0;
}
