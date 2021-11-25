#include <iostream>
#include <stdio.h>
int main() {  
   unsigned t0, t1;
  
   int numElementos=1000000;
   
   int numSumas=100000;
   
   t0=clock();
 
   int foo[numElementos];
   int bar[numElementos];
   srand((int)time(0));


 
   for (int i=0;i<numElementos;i++){
       bar[i]=rand()% 1000000;
       foo[i]=rand() % 1000000;
   }
  
   for (int j=0; j<numSumas;j++){
       for (int i=0; i<numElementos; i++){
               bar[i]+=foo[i];
       }
       t1=clock();
       double time = (double(t1-t0)/CLOCKS_PER_SEC);
       printf("Tiempo de ejecución: %f para %d sumas\n", time, j+1);
   }
 
   return 0;
 
}


