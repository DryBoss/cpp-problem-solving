#include <iostream>

using namespace std;

int main() {

 double length, width;

 // Get the length and width from the user
 cout << "Enter the length of the rectangle: ";
 cin >> length;
 cout << "Enter the width of the rectangle: ";
 cin >> width;

 // Calculate area and perimeter
 double area = length * width;
 double perimeter = 2 * (length + width);

 // Display the calculated values
 cout << "Area of the rectangle: " << area << endl;
 cout << "Perimeter of the rectangle: " << perimeter << endl;
 return 0;
}
