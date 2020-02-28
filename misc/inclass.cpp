#include <iostream>

using namespace std;

int main() {
  int sum = 3;
  int num1 = 1;
  int num2 = 2;
  int num3 = 3;
  cout << endl;
  cout << "Even Fibonacci numbers." << endl;

  while (num3 < 4000000) {
    num3 = num1 + num2;
    if (num3 % 2 == 0) {
      sum += num3;
    }
    num1 = num2;
    num2 = num3;
  }
  cout << "The sum of the even-valued terms is: " << sum << endl;
  return 0;


}


