//Izzy Carhart
//ccarhart
//CSE 20311
//hw02

#include <iostream>
#include <cmath>

int main () {
  int x;
  std::cin >> x;

// evaluates if user entered positive integer (will only give positive factors)
  if (x >= 0){
    for (int i = 1; i <= x; i = i + 1){
      if (x % i == 0){
        std::cout << i << std::endl;
      }
    }
  }

// evalutates if user entered negative integer (both positive and negative factors)
  if (x < 0){
    for (int i = x; i < 0; i = i + 1){
      if (x % i == 0) {
        std::cout << i << std::endl;
        std::cout << (-1*i) << std::endl;
      }
    }
  }
  
}
