#include <cstdio>
#include <iostream>
#include <string.h> 
//обратное слово

int main (int argc, char** argv) {
  char str[] = "Hello, world!";
  char* pr = str;  
  printf("  input\t\t   output\n\n");	
  for (int i = 0; i < strlen(str); ++i) {
    printf("%c", str[i]);
  }
  printf("\t");
  for (int i = strlen(str) - 1; i >= 0; --i) {
    printf("%c", str[i]);
  }
////////////////////////////////////////////	
  std::cout << std::endl;
  std::cout << pr << ' ' << ' ' << ' ';	
	for (int i = strlen(str) - 1; i >= 0; --i) {
	  std::cout << *(pr + i);
	}
  std::cout << std::endl;
  return 0;	
}
