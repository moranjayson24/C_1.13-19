#include<stdio.h>

void convertTable(char from, char to);

int main(int argc, const * char argv[]) {
  printf("For Farenheit to Celsius:  [F]\n
          For Celsius to Farenhein:  [C]\n");
  if( (char c = getchar() ) == 'F'){
    convert('F', 'C');
  } else {
    convert('C', 'F');
  }
return 0;
}

void convertTable(char from, char to) {
  printf("====================== \n")
  
  printf("======================")
}
