#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void doThing() {
    int first = 0b1010;
              //^^v See here
    int second = 0b0011;
    int result = (first << 4) | second;
    printf("%d\n", result);

    int temp = first;
    for (int i = 0; i < 4; i ++) {
      if (temp & 1 == 1) {
        printf("right\n");
      } else {
        printf("left\n");
      }
      temp = temp >> 1;
    }

    int x = 100;
    int y = 0;
    unsigned pow = 10;
    while(y >= pow)
        pow *= 10;
    int sol = x * pow + y;
    printf("sol %d\n", sol);

    unsigned char *word = malloc(sizeof(word) * 4);
    int num = 10001;

    word[0] = num;
    printf("%d\n", word[0]);

    FILE *fptr;
    
    fptr = fopen("test_file", "w");
    fprintf(fptr, "%d", word[0]);
    fclose(fptr);

    return 0;
}

int main() {
  doThing();
  return 0;
}