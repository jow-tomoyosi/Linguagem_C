#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define PI 3.14159
 
int main() {

     double a, raio;
     
     scanf("%lf", &raio);
        
      a = PI * pow(raio, 2);
     
     printf("A=%.4f\n", a);
    return 0;
}
