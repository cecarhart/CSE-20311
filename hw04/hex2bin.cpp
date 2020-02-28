//Izzy Carhart
//HW04, part 3
//CSE 20311
// I'm sorry I couldn't figure it out:(

#include <iostream>
#include <cctype>

using namespace std;

int main() {
  char x, y;	
  int total;
  while (cin >> hex >> x >> y) {
    if (!isalnum(x) || !isalnum(y)) {
      cerr << "Error: Invalid hexadecimal character." << endl;
    }
    if (((int)x < 58) && ((int)y < 58)) {
      total = ((int)x - 48) * 16;
      total = ((int)y - 48) + total;
      cout << (char)total;
    }
    else if ((int)y < 58) {
      total = ((int)x - 55) * 16;
      total = ((int)y - 48) + total;
      cout << (char)total;
    }
    else if ((int)x < 58) {
      total = ((int)x - 48) * 16;
      total = ((int)y - 55) + total;
      cout << (char)total;
    }
    else {
      total = (int(x) - 55) * 16;
      total = ((int)y - 55) + total;
      cout << (char)total; 
    }
  }
  if (cin.eof()) {
    cerr << "CError: Hexadecimal character are not paired." << endl;
  }
  cout << endl;
  return 0;
}
