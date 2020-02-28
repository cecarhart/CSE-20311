//Izzy Carhart
//ccarhart
//HW02
//FunComp

#include <iostream>
#include <iomanip>
#include <cmath>


int main() {

  int rows;
  int cols;
  float spaces;
  std::cin >> std::hex >> rows;
  std::cin >> std::hex >> cols;
  spaces = std::ceil(cols / 3);
  if (spaces < 2){
    spaces = 2;
  }

//header line
  for (int h=0; h < spaces; h = h + 1){
    std::cout << " ";
  }
  for (int k = 1; k < cols + 1; k = k + 1){
    std::cout << std::setw(spaces) << std::hex << std::uppercase << k;
  }
  std::cout << std::endl;


  std::cout << std::setw(spaces);

// rest of multiplication table
  for (int i = 0; i < rows; i = i + 1){
    std::cout << (i+1) << std::setw(spaces);
    for (int j = 0; j < cols; j = j + 1){
      std::cout << std::hex << std::uppercase << ((i+1)*(j+1)) << std::setw(spaces);
    }
    std::cout << std::endl;
  }
  
  return 0;
}
