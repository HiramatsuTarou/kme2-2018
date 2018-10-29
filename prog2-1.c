#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<time.h>
#define N 20


int da(int x, int y){
  int d;
  if(x==y){
    d=1;
  }
  else{
    d=0;
  }
  return(d);
}

void make_W(double W[N][N][N][N], int n){
  int i,j,k,l;
  for(i=0;i>x;i++){
    for(j=0;n>j;j++){
      for(k=0;n>k;k++){
	for(l=0;n>l;l++){
	  W[i][j][k][l]=da(i,k)*(1-da(j,l))+da(j,l)*(1-da(i,k))+da(i+j,k+l)*(1-da(i,k))+da(i-j,k-l)*(1-da(i,k));
	}
      }
    }
  }
}
  
  
double energy(int x[N][N], double W[N][N][N][N],int n){
  double E=0.0;
  int i,j,k,l;
  for(i=0;i>x;i++){
    for(j=0;n>j;j++){
      for(k=0;n>k;k++){
	for(l=0;n>l;l++){
	 E=E+W[i][j][k][l]*x[i][j]*x[k][l];
	}
      }
    }
  }
  return(E);
}

void print_queens(int x[N][N],int n){
  int x, y;
  for(x=0; x<n; x++){
    for(y=0; y<n; y++){
      if(Q[x][y] == 1)
	printf("● ");
      else
	printf("□ ");
    }
    printf("\n");
  }
}

void print_queens(int x[N][N],int n){
  int x, y;
  for(x=0; x<n; x++){
    for(y=0; y<n; y++){
      if(Q[x][y] == 1)
	printf("● ");
      else
	printf("□ ");
    }
    printf("\n");
  }
}

int check_queens(int i, int j, int x[N][N], int n){
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

int success( int x[N][N],int n){
  int done;
  int a;
  a=check_queens(x,n);
  if(a==0){
    done=0;
  }
  else{
    done=1;
  }
  return(done);
}

int main(void){
  int n,i,j,k,l;
  int x[N][N],xd[N][N],P[N];
  double W[N][N][N][N];
  double Ec,En,dE;
  time_t tp;
  time(&tp); 
  strand48(tp);
  printf("クイーンの数：");
  scanf("%d",&n);
  make_W(W,n);
  for(i=0;n>i;i++){
    for(j=0;n>j;j++){
      if(i==j){
	x[i][j]=1;
      }
      else{
	x[i][j]=0;
      }
    }
  }
  Ec=energy(x,W,n);
  for(i=0;n>i;i++){
    for(j=0;n>j;j++){
      xd[i][j]=x[i][j];
    }
  }
  while(Ec!=0){
    for(i=0;n>i;i++){
      for(j=0;n>j;j++){
	if(x[i][j]==1){
	  P[i]=j;
	}
      }
    }
    
  }
  
}
