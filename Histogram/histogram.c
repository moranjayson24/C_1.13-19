#include <stdio.h>
#include <string.h>
#define IN 1;
#define OUT 0;

int main(int argc, const char * argv[]) {

  int words[25];
  int wordlen, state, c;
  wordlen = state = c = 0;
  memset( words, 0, 25*sizeof( words[0] ) );

  while((c = getchar()) != EOF) {

    if(c == '\n' || c == ' ' || c == '\t') {
      state = OUT;
      words[wordlen]++;
      wordlen = 0;
    }
    else {
      state = IN;
      wordlen++;
    }
  }

// printing each line
  for(int i = 1; i <= 25; i++) {
    printf( "%d : ", i );

    for(int l = 0; l < words[i]; l++){
      printf("*");
    }

    printf("\n");
  }
}





//hw 1-13 through 1-19 exclude 15
