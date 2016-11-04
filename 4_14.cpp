//binary search
#include <iostream>
#include <stdlib.h>
#include <time.h>
#define SIZE 16

void insertSort(int array[], unsigned int size) {
  for (unsigned int i = 1; i < size; ++i) {
    int key = array[i];
    int j = i - 1;
    while (j >= 0 && array[j] > key) {
      int temp = array[j];
      array[j] = key;
      array[j + 1] = temp;
      --j;
    }
  }
}
 
bool searchNumber(int array[], int size, int X) {
  int low, high, mid; 
  low = 0;
  high = size - 1;
  while (low <= high) {
    mid = low + (high - low) / 2;        
    if (X < array[mid]) {              
      high = mid - 1;
	}
    else if (X > array[mid]) {
      low = mid + 1;
}      
    else return array[mid];
  }
  return false;    
} 

int main(int argc, char** argv) {
  srand(time(NULL));
  int array[SIZE];
  int X;
  for (int i = 0; i < SIZE; i++) {
    array[i] = rand() % 100;
    std::cout << array[i] << "\t";
  }
  std::cout << std::endl;
  insertSort(array, SIZE);
  for (int i = 0; i < SIZE; i++) {
    std::cout << array[i] << "\t";
  }
  std::cout << std::endl;  
  std::cout << "Enter X" << std::endl;
  std::cin >> X;	
  if (searchNumber(array, SIZE, X) == false) {
    std::cout << "No";
  }
  else  std::cout << "YES";
  std::cout << std::endl; 
  return 0;
}
