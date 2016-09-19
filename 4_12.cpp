#include <stdio.h>
#include <string.h>
#include <iostream> 

int main(int argc, char** argv) {
  const char * dictionary[] = {"mathematics", "physics", "biology", "psychology", "geometry", "geography", "geology", "bioinformatics", "science", "scifi", "pharmacology", "musics", "analysis", "policy", "geopolicy", "politology", "demonology", "demonstations", "bioengineering", "modeling", "algebra", "literature", "liberation", "listing", "society", "scene", "lighting"};  
  const char * chars;  
  unsigned int size = sizeof(dictionary) / sizeof(dictionary[0]);   
  while (chars) {
    scanf("%s", chars);            
      for (int i = 0; i < size; ++i) 
        if(strncmp(dictionary[i], chars, 1) == 0) {     
          printf("%s,", dictionary[i]);             
        }
        printf("\n");   
  }   
  return 0;
}

