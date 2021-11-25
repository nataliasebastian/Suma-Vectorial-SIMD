#include <iostream>
#include<stdio.h>
int main() {  
   unsigned t0, t1;
   t0=clock();
 
   int numSumas=100000;
   typedef int v4si __attribute__ ((vector_size (1024*sizeof(int))));
   srand((int)time(0));
   v4si foo;
   v4si bar;
 
   for (int i=0;i<1000000;i++){
       bar[i]=rand()% 1000000;
       foo[i]=rand() % 1000000;
   }
 
   for (int j=0; j<numSumas;j++){
       bar += foo;
   	t1=clock();
   	double time = (double(t1-t0)/CLOCKS_PER_SEC);
  	printf("Tiempo de ejecución: %f para %d sumas \n", time, j+1);
   }
  
   return 0;
}


