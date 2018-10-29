#define N 4
#include <stdio.h>

void print_queens(int Q[N][N]){
  int x, y;
  for(x=0; N>x; x++){
    for(y=0; N>y; y++){
      if(Q[x][y] == 1)
	printf("● ");
      else
	printf("□ ");
    }
    printf("\n");
  }
}


int main( void ) {
  int Q[N][N];
  Q[0][0]=0;
  Q[0][1]=1;
  Q[0][2]=0;
  Q[0][3]=0;
  Q[1][0]=0;
  Q[1][1]=0;
  Q[1][2]=0;
  Q[1][3]=1;
  Q[2][0]=1;
  Q[2][1]=0;
  Q[2][2]=0;
  Q[2][3]=0;
  Q[3][0]=0;
  Q[3][1]=0;
  Q[3][2]=1;
  Q[3][3]=0;
  print_queens(Q);
  return(0);
}
