#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

double X_i(){
  double r, val;
  r=rand()%2;

  val=pow(-1,r);
  return val;
}

int main(){

  double t, n, m[21], w_i, t_1[100], t_2[100];
  int i, runs, j;

  srand(time(NULL));
  t=2;
  n=10;
  runs=100;
  i=0;

  for(j=0;j<runs;j++){
    //printf("%f %f\n", (double)i, m[0]);
    m[0]=0;
    for(i=1;i<n*t+1;i++){
      m[i]=m[i-1]+X_i();
      w_i=m[i]/sqrt(n);
      //this printf statement was used for part a
      //printf("%f %f\n",i/n, w_i);
    }
    t_1[j]=m[10];
    t_2[j]=m[20];
    printf("%f %f\n", t_1[j], t_2[j]);
  }

  //make histogram
  
  int t_1_val[21], t_2_val[41];//count the number of a c

  for(i=0;i<21;i++)
    t_1_val[i]=0;
  
  for(i=0;i<41;i++)
    t_2_val[i]=0;

  for(i=0;i<runs;i++){
    for(j=-10;j<=10;j++){
      if(t_1[i]==j){
	t_1_val[i]++;
      }
    }
    for(j=-20;j<=20;j++){
      if((int)t_2[i]==j){
	printf("%d\n", t_2[i]);
	t_2_val[i]++;
      }
    }
  }

  for(i=0;i<21;i++)
    printf("%d %d\n", -10+i,t_1_val[i]);
  
  for(i=0;i<41;i++)
    //printf("%d\n", t_2_val[i]);

  return 0;
}
