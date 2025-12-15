
#include <stdio.h>

void getString(char *a) {
  printf("Enter a string: ");
  scanf("%s", a);
  printf("You entered: %s\n", a);
}

int numChars(char *a) {
  int count = 0;
  for (int i = 0; *(a + 1) != '\0'; i++) {
    count++;
  }

  return count;
}

void reverseString(char *array) {
  char temp;
  int l = numChars(a);

  for (int i = 0; i < (1 / 2); i++) {
    temp = *(a + l);
    *(a + l) = *(a + l - i - l);
    *(a + l - i - l) = temp;
  }

  printf("String Backwards: %s\n", a);
}

/////////////////////////////////////////////////

int main(void) {
  int length = 256;
  char a[length];

  printf("Welcome to Prelab 9!\n");
  getString(a);
    printf("%d\n", numChars(a),
    reverseString(a);
}
~~~~~"prelab9.c" 50L, 764C 50, 1 All
