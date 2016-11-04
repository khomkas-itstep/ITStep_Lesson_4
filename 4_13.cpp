#include <stdio.h>
#include <string.h>
#include <iostream> 
//поиск слов по буквам начальным
  
int main(int argc, char** argv) {
  const char* dictionary[] = {"mathematics", "physics", "biology", "psychology", 
    "geometry", "geography", "geology", "bioinformatics", "science", "scifi", 
    "pharmacology", "musics", "analysis", "policy", "geopolicy", "politology", 
    "demonology", "demonstations", "bioengineering", "modeling", "algebra", 
    "literature", "liberation", "listing", "society", "scene", "lighting"};  
  char* chars = new char[20];  
  unsigned int size = sizeof(dictionary) / sizeof(dictionary[0]);   
  while (chars != NULL) {
    printf("\n");
    scanf("%s", chars);   
    int N;
    N = strlen(chars);    
    for (int i = 0; i < size; ++i) 
      if(strncmp(dictionary[i], chars, N) == 0) {     
        printf("%s, ", dictionary[i]);     
      }
  }  
  delete [] chars;
  return 0;
}

