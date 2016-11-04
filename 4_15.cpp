//insertionSort() для массива строк
#include <cstdio>

void insertionSort(char array[], unsigned int size) {
  for (unsigned int i = 1; i < size; ++i) {
    char key = array[i];
    int j = i - 1;
    while (j < size && array[j] > key) {
      char temp = array[j];
      array[j] = key;
      array[j + 1] = temp;
      --j;
    }
  }
}

void print(char array[], unsigned int size) {  
  printf("[ "); 
  for (unsigned int i = 0; i < size; ++i) {    
    printf("%c", array[i]);   
  }
  printf("]\n");
}

int main(int argc, char** argv) {
  char array[] = "HELLO, world!"; 
  int size = sizeof(array) / sizeof(array[0]);
  print(array, size);
  insertionSort(array, size);
  print(array, size);
  return 0;
}

