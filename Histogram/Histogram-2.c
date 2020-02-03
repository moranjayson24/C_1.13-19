#include <stdio.h>
#include <string.h>
#define IN 1;
#define OUT 0;

int main(int argc, const char * argv[]) {

  char c;
  char characters[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
  int charFreq[26];
  memset( charFreq, 0, 26*sizeof( charFreq[26] ) );

  while((c = getchar()) != EOF) {
    int index = 0;
    for(char i = 'a'; i < 'z'; i++) {
      if( c == i ){
        charFreq[index]++;
      }
      index++;
    }
  }

// printing each line
  int newIndex = 0;
  for(char i = 'a'; i <= 'z'; i++) {
    printf( "%c : ", i );

    for(int l = 0; l < charFreq[newIndex]; l++){
      printf("*");
    }
    newIndex++;

    printf("\n");
  }

}


//hw 1-13 through 1-19 exclude 15
