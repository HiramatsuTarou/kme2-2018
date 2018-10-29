#include <stdio.h>
#include <stdlib.h>
#define N 30


void print_queens(int *Q,int n){
  int x, y;
  for(x=0; x<n; x++){
    for(y=0; y<n; y++){
      if(Q[x*n+y] == 1)
	printf("● ");
      else
	printf("□ ");
    }
    printf("\n");
  }
}


int check_queens(int i, int j, int *Q, int n){
  int x, y;
  int sum=0;
  for(x=0; n>x; x++){
    for(y=0; n>y; y++){
      if(x==i && y==j){
      }
      else if(x==i && Q[x*n+y]==1){
	sum++;
      }
      else if(y==j && Q[x*n+y]==1){
	sum++;
      }
      else if(i+j==x+y && Q[x*n+y]==1){
	sum++;
      }
      else if(i-j==x-y && Q[x*n+y]==1){
	sum++;
      }
    }
  }
  return sum;
}



int main (void){
  int *Q, P[N]={0}, n;
  int x, y,c,S[N]={0};
  scanf("%d",&n);
  Q=calloc(n*n,sizeof(int));
  for(x=0;x<n;x++){
    for(y=P[x];y<n;y++){
      c=check_queens(x,y,Q,n);
      if(c==0){
	Q[x*n+y]=1;
	P[x]=y;
      }
      print_queens(Q,n);
      printf("\n");
      printf("%d\n",y);
      S[x]=S[x]+Q[x*n+y];
      printf("S[%d]=%d\n",x,S[x]);
    }
    if(S[x]==0){
      P[x]=0;
      y=P[--x];
      Q[x*n+y]=0;
      P[x]++;
      x=x-1;
      S[x+1]=0;
    }
  }
  printf("成功\n");
  print_queens(Q,n);
  free(Q);
  return 0;
}

      
  
  
  
