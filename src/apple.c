#include <stdio.h>

int n;
int k;
int A[100000];
int p(x){
  int i;
  int sum;
  sum=0;
  for(i = 0; i < n; i++){
    sum = sum + (A[i]+x-1)/x;  
  }
  if(sum > k ){
    return 0;
  }
  else{
    return 1;
  }
}
int main(){
  int i, lb, ub;
  scanf("%d%d", &n, &k);
  for(i = 0; i < n; i++){
    scanf("%d", &A[i]);
  }
  lb = 0;
  ub = 1000000000;
  while ( ub - lb > 1) {
    int mid = ( lb + ub ) / 2;
    if(p ( mid )==1){
      ub = mid ;
    }
    else {
      lb = mid ;
    }
  }
  printf("%d\n",ub);
  return 0;
}
