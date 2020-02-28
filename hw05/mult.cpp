//Izzy Carhart
//ccarhart
//HW05, part 1
//FunComp

#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>

using namespace std;

int main(int argc, char ** argv) {

  float spaces;
  long int cols, rows;
  rows = strtol(argv[1], argv, 16);
  cols = strtol(argv[2], argv, 16);
  spaces = std::ceil(cols / 3);
  if (spaces < 2){
    spaces = 2;
  }

  // error message
  if (rows <= 0 || cols <= 0) {
    cerr << "Invalid Arguments. " << endl;
  }
  else {
    // header line
    for (int h=0; h < spaces; h = h + 1){
      cout << " ";
    }
    for (int k = 1; k < cols + 1; k = k + 1){
      cout << setw(spaces) << hex << uppercase << k;
    }
    cout << endl;

    cout << setw(spaces);

    // rest of multiplication table
    for (int i = 0; i < rows; i = i + 1){
      cout << (i+1) << setw(spaces);
      for (int j = 0; j < cols; j = j + 1){
        cout << hex << uppercase << ((i+1)*(j+1)) << setw(spaces);
      }
      cout << endl;
    }
  }
  
  return 0;
}

