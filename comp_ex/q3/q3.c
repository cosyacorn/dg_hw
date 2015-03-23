#include<stdio.h>
#include<stdlib.h>

double f(double x){
  return -5*x;
}

int main(){

  double h[5], t, x0, x1;
  int i;

  //set the different step sizes
  h[0]=0.5;
  for(i=1;i<5;i++)
    h[i]=h[i-1]*0.5;


  for(i=0;i<5;i++){
    x0=1;
    for(t=h[i];t<=1;t+=h[i]){
      x0=x0+h[i]*f(x0);
      printf("%f %f %f\n",h[i], t, x0);
    }
    printf("\n");
  }

  return 0;
}
