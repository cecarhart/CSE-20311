//Izzy Carhart
//ccarhart
//CSE 20311
//hw03

#include <iostream>
#include <cctype>

using namespace std;

int main() {
  char ch;
  int place;

  while (cin.get(ch)) {
    place = (int)ch;
    if (islower(ch)) {
      place = (ch - 97 + 13) % 26 + 97;
      ch = place;
      cout << (char)(ch);
    }
    else if (isupper(ch)) {
      place = (ch - 65 + 13) % 26 + 65;
      ch = place;
      cout << (char)(ch);
    }
    else if (isdigit(ch)) {
      place = (ch - 48 + 5) % 10 + 48;
      ch = place;
      cout << (char)(ch);
    }
    else {
      cout << ch;
    }
  }
  cout << endl;
  return 0;
}
