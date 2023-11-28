#include <iostream>

using namespace std;

int main() {
  int sub1, sub2, sub3, sub4, sub5;

  // Get marks for each subject
  cout << "Enter marks for Physics :";
  cin >> sub1;
  cout << "Enter marks for Chemistry :";
  cin >> sub2;
  cout << "Enter marks for Biology :";
  cin >> sub3;
  cout << "Enter marks for Math :";
  cin >> sub4;
  cout << "Enter marks for Higher Math :";
  cin >> sub5;

  // Calculate total, average, and percentage
  int totalMarks = sub1 + sub2 + sub3 + sub4 + sub5;
  double average = totalMarks / 5.0;
  double percentage = (totalMarks / (5.0 * 100)) * 100;

  // Display the calculated values
  cout << "\nTotal marks: " << totalMarks << endl;
  cout << "Average marks: " << average << endl;
  cout << "Percentage: " << percentage << "%" << endl;

 return 0;
}