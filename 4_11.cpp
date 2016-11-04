#include <cstdio>
#include <string.h>
#include <iostream>  
//поиск слова в тексте

int main(int argc, char** argv) {
  const char* dictionary[] = {"mathematics", "physics", "biology", "psychology",
  "geometry", "geography", "geology","bioinformatics", "science", "scifi", 
  "pharmacology", "musics", "analysis", "policy", "geopolicy", "politology", 
  "demonology", "demonstations", "bioengineering", "modeling", "algebra", 
  "literature", "liberation", "listing", "society", "scene", "lighting"};  
  char* word = new char[20];
  unsigned int size = sizeof(dictionary) / sizeof(dictionary[0]);  
  gets(word);
  for (int i = 0; i < size; ++i){  
    if (strcoll(word, dictionary[i]) == 0) {
      printf("Yes! Found! %s\n", word);
      return -1;
    } 
  }
  printf("NOT found! %s\n", word);
  delete [] word;  
  return 0;
}

