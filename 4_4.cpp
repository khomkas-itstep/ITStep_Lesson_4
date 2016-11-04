//скобочная последовательность
#include <stdio.h>
#define SIZE 20

int main(int argc, char** argv) {  
  char chars[SIZE]; 
  scanf("%s", chars);  
  int count = 0;      
  for (int i = 0; i < SIZE; ++i) {
    if (chars[0] == '}' ) {
      printf("NO\n");     
      return 0;
    }
    if (chars[0] == '{') {
      if (chars[i] == '{') { 
        count++;
      }
      if (chars[i] == '}') { 
        count--; 
      }  
    }
  } 
  for (int j = SIZE - 1; j > 0; --j) {
    if (chars[j] == '{') {
      printf("NO\n");
      return 0;
    }
    if (chars[j] == '}') {       
      break;
    }
  }
  if (count == 0)
    printf("YES\n");
  if (count != 0)	  
    printf("NO\n");           
  return 0;
}

 	
 
