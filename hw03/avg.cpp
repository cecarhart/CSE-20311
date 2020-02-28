//Izzy Carhart
//ccarhart
//CSE 20311
//hw03

#include <iostream>

using namespace std;

int main() {
  double d;
  double sum = 0;
  int num = 0;
  
  // continues until a non-number is entered as input
  while (cin >> d){
    sum = sum + d;
    num = num + 1;
  }
  cout << (sum/num) << endl;
  return 0;
}
