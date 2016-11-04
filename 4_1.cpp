//getMax() stack
#include <cstdio>

int stack[10];
int array[10];
int size = sizeof(stack) / sizeof(stack[0]);
int sizeAR = sizeof(array) / sizeof(array[0]);
int head = 0;

int top() {
  if (head == 0) {
    printf("Stack Underflow!!!");
    throw;
  }
  if (head >= size) {
    printf("Stack Overflow!!!");
    throw;
  }
  return stack[head - 1];
}

void push(int x) {
  if (head >= size) {
    printf("Stack Overflow!!!");
    return;
  }
  stack[head] = x;
  ++head;
}

void pop() {
  if (head == 0) {
    printf("Stack Underflow!!!");
  return;
  }
  --head;
}

int getMax() {
  for (int head = 1; head < size; ++head) {
    if (stack[head] > stack[head - 1]) {
      array[head] = stack[head];
    }
    else {array[head] = stack[head - 1];
    }
    if (array[head] < array[head - 1]) {
      array[head] = array[head - 1];
    }
  }
  printf("Max elem = %i\n", array[sizeAR - 1]);
}

int print() {
  for (int i = 0; i < head; ++i) {
    printf("%i ", stack[i]);
  }
  printf("\n");
}
// -----------------------------------------------------------------------
enum Command {
  TOP = 0, PUSH = 1, POP = 2, PRINT = 3, EXIT = 4, MAX = 9,
};

int main(int argc, char** argv) {
  while (true) {
    Command c;
    scanf("%i", &c);
    switch (c) {
      case TOP:
        printf("TOP: %i\n", top());
        break;
      case PUSH:
        char value;
        scanf("%i", &value);
        push(value);
        break;
      case POP:
        pop();
        break;
      case PRINT:
        print();
        break;
      case MAX:
        getMax();
	    break;
      case EXIT:
        printf("EXIT\n");
        return 0;
      default:
        printf("Wrong command!\n");
        break;
    }
  }
  return 0;
}



