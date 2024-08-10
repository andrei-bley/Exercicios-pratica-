#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  int d1 = 0;
  int d2 = 0;
  int d3 = 0;
  int d4 = 0;
  int c = 0;
  int n = 0;
  srand(time(NULL));
  while (c<100){
    n = 1 +rand()%100;
    if (n>=1 && n<=25 ){
      d1 = d1 + 1;
    }
    else if (n<=50){
      d2 = d2 + 1;
    }
    else if (n <= 75){
      d3 = d3 + 1;
    }
    else if(n <= 100){
      d4 = d4 + 1;
    }
    c ++;
  }
  printf("%d\n",d1);
  printf("%d\n",d2);
  printf("%d\n",d3);
  printf("%d\n",d4);
  
  return 0;
}