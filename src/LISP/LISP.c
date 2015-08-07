#include <stdio.h>
/* Declare a static buffer for user input of maximum size 2048 */
static char input[2048];

int main(int argc, char** argv) {
  /* Print Version and Exit Information */
  puts("Lispy Version 0.0.0.0.1");
  puts("Press Ctrl+c to Exit\n");
  
 /* In a never ending loop */
  while (1) {

    /* Output our prompt */
    fputs("lispy> ", stdout);

    /* Read a line of user input of maximum size 2048 */
    fgets(input, 2048, stdin);

    /* Echo input back to user */
    printf("No you're a %s", input);
	/* Add input to history */
    add_history(input);  
	/* Free retrived input */
    free(input);
	}
  
  add_together(10, 18);
return 0;
  
  
}

typedef struct {
  float x;
  float y;
} point;

point p;
p.x = 0.1;
p.y = 10.0;

float length = sqrt(p.x * p.x + p.y * p.y);

if (x > 10 && x < 100) {
  puts("x is greater than ten and less than one hundred!");
} else {
  puts("x is either less than eleven or greater than ninety-nine!");
}

int add_together(int x, int y) {
  int result = x + y;
  return result;
}