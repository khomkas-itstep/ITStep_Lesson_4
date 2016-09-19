#include <stdio.h>

int main(int argc, char** argv) {
  char text[] = "Lorem ipsum dolor sit amet, consectetur adipiscing elit. Aliquam eleifend\n condimentum magna imperdiet tristique. Pellentesque fringilla maximus mi\n vitae ullamcorper. Fusce mattis neque vel nisi fringilla, vel aliquet\n libero sagittis. Nullam fringilla at mi at accumsan. Suspendisse ullamcorper\n auctor enim, eu malesuada felis ornare eu. Morbi sodales nunc eget lacus\n sollicitudin semper. Donec tristique consequat tellus, ut porttitor felis\n maximus eget. Fusce consectetur iaculis pharetra. Donec congue volutpat arcu,\n eget sodales sapien tristique quis. Nullam ut posuere risus, sed pharetra lorem.\n Cras varius, est eu pulvinar scelerisque, ipsum nisi bibendum sapien, in\n scelerisque velit risus eget felis. Nam nec porttitor erat. Suspendisse\n dictum sit amet magna finibus lobortis. Phasellus non sem mollis, ultrices\n odio non, volutpat ligula. Aenean mollis eros ex, vitae lobortis quam gravida sed.\n";
  bool inword = false;
  int words;
  int n_words;
  n_words = 0;
  int i = 0;
  while (text[i] == ' ' && text[i] !='\0')
    i++;
    words = 0;
  while (text[i] !='\0') {
    if (text[i] !=' ' && words == 0) {
      words = 1;
      ++n_words;
    } else  if (text[i] == ' ')
        words = 0;
        i++;        
  }
  printf("%i\n", n_words);
  return 0;
}
 
