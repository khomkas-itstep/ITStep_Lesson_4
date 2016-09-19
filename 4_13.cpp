#include <stdio.h>
#include <string.h>
#include <iostream> 
  
int main(int argc, char** argv) {
  const char* dictionary[] = {"mathematics", "physics", "biology", "psychology", "geometry", "geography", "geology", "bioinformatics", "science", "scifi", "pharmacology", "musics", "analysis", "policy", "geopolicy", "politology", "demonology", "demonstations", "bioengineering", "modeling", "algebra", "literature", "liberation", "listing", "society", "scene", "lighting"};  
  char* chars;  
  unsigned int size = sizeof(dictionary) / sizeof(dictionary[0]);   
  while (chars != "0") {
    printf("\n");
    scanf("%s", chars);   
    int N;
    N = strlen(chars);    
    for (int i = 0; i < size; ++i) 
      if(strncmp(dictionary[i], chars, N) == 0) {     
        printf("%s, ", dictionary[i]);     
      }
  }  
  return 0;
}

