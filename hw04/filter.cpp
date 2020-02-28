//Izzy Carhart
//HW04, part 1
//CSE 20311

#include <iostream>
#include <cctype>

using namespace std;

int main() {
  char ch;
  char previous;
  char current;

  while (cin.get(ch)) {
    previous = current;
    current = ch;
    if (isalpha(ch)){
      cout << (char)toupper(ch);
    }
    else if (isdigit(ch) || ch == 39 || ch == 45) {
      cout << (char)ch;
    }
    else if (isblank(previous) && isblank(current)) {
      cout;
    }
    else if (isblank(ch)) {
      cout << endl;
    }
    else {
      cout;
    }
  } 
  cout << endl;
  return 0;
}
