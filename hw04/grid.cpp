/**
 * Homework 4 Part 2
 * by Izzy Carhart
 * Print a grid of the specified size.
 */
#include<iostream>

using namespace std;

// Function prototype
void printgrid(int, int, int);
void printrow(int, int);
void printcols(int, int, int);

// Main function.
int main() {
  int rows, cols, size;
  cin >> rows >> cols >> size;
  printgrid(rows, cols, size);
}

void printgrid(int rows, int cols, int size) {
  printrow(cols, size);
  for (int i = 0; i < rows; i += 1) {
    printcols(rows, cols, size);
    printrow(cols, size);
  }
  cout << endl; 
}

// prints boundaries of each row
void printrow(int cols, int size) {
  cout << "+";
  for (int i = 0; i < cols; i += 1) {
    for (int j = 0; j < 2*size; j += 1) {
      cout << "-";
    }
    cout << "+";
  } 
  cout << endl;
}

// prints boundaries of each column
void printcols(int rows, int cols, int size) {
  for (int k = 0; k < size; k += 1) {
    cout << "|";
    for (int i = 0; i < cols; i += 1) {
      for (int j = 0; j < 2*size; j += 1) {
        cout << " ";
      }   
      cout << "|";
    }
    cout << endl;
  }
}
