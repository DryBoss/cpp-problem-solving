#include <iostream>
#include <cctype> // For isalpha() and tolower() functions

using namespace std;

int main() {
  char ch;

  // Get a character from the user
  cout << "Enter a character: ";
  cin >> ch;

  // Convert the character to lowercase for easier comparison
  char Ch = tolower(ch); //lowerCase for easy comparison

  // Check if it's a vowel or a consonant
  if (Ch == 'a' || Ch == 'e' || Ch == 'i' || Ch == 'o' || Ch == 'u') {
    cout << ch << " is a vowel." << endl;
  } else {
    cout << ch << " is a consonant." << endl;
  }

  return 0;
}