#include <cstdio>
#include <iostream> 
int main (int argc, char** argv) {
  char str[] = "Hello, world!";
  char* pr = str;
  int size = sizeof(str) / sizeof(str[0]);
  printf("  input\t\t   output\n\n");	
	for (int i = 0; i < size; ++i) {
	  printf("%c", str[i]);
	}
  printf("\t");
	for (int i = size - 1; i >= 0; --i) {
	  printf("%c", str[i]);
	}
////////////////////////////////////////////	
  std::cout << std::endl;
  std::cout << pr << ' ' << ' ' << ' ';	
	for (int i = size - 1; i >= 0; --i) {
	  std::cout << *(pr+i);
	}
  std::cout << std::endl;
  return 0;	
}
