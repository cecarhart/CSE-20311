//Izzy Carhart
//ccarhart
//CSE 20311
//hw03

#include <iostream>
#include <cctype>

using namespace std;

int main() {
  char ch;
  for (int i = 0; i < 128; i++){
    ch = char(i);
    if (isprint(ch) && !isspace(ch)) {
      if (i < 100){
        cout << 0 << (int)ch << " " << ch << endl;
      }
      else {
        cout << (int)ch << " " << ch << endl;
      }
    }
  }
  return 0;
}
