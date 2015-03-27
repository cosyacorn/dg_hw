#include<stdio.h>
#include<math.h>
#include<time.h>
#include<stdlib.h>

double X_i(){
  double r, val;
  r=rand()%2;

  val=pow(-1,r);
  return val;
}

int main(){

  double a, b, y_n, y_0, t, n, m[100], w[100];
  int i;
  
  srand(time(NULL));

  a=1.5;
  b=1.0;
  y_0=1.0;
  t=1;
  n=100;

  m[0]=0;
  w[0]=0;
  for(i=1;i<100;i++){
    m[i]=m[i-1]+X_i();
    w[i]=m[i]/sqrt(n);
  }

  y_n=y_0;
  for(i=1;i<n;i++){
    y_n=y_n+a*(1/n)+b*(w[i]-w[i-1]);
    printf("%f\n", y_n);
  }


  return 0;
}
