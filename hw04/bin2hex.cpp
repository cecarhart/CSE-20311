//Izzy Carhart
//CSE 20311
//HW04, part 3

#include <iostream>

using namespace std;

// need to figure out how to show 0 if hex value is less than 16
int main() {
  char ch;
  int count = 0;
  while (cin.get(ch)) {
    if (ch < 15){
      cout << hex << uppercase << "0" << (int)ch;
    }
    else {
      cout << hex << uppercase << (int)ch;
    }
    count += 1;
    if (count % 4 == 0) {
      cout << " ";
    }
    if (count % 16 == 0) {
      cout << endl;
    }
  }
  cout << endl;
  return 0;
}
