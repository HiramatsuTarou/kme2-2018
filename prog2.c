#define N 4
#include <stdio.h>

int check_queens(int i, int j, int Q[N][N]){
  int x, y;
  int sum=0;
  for(x=0; N>x; x++){
    for(y=0; N>y; y++){
      if(x==i && y==j){
      }
      else if(x==i && Q[x][y]==1){
	sum++;
      }
      else if(y==j && Q[x][y]==1){
	sum++;
      }
      else if(i+j==x+y && Q[x][y]==1){
	sum++;
      }
      else if(i-j==x-y && Q[x][y]==1){
	sum++;
      }
    }
  }
  return sum;
}

int main( void ) {
  int Q[N][N];
  int x;
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
  x=check_queens(1,2,Q);
  printf("sum=%d\n",x);
  return(0);
}

