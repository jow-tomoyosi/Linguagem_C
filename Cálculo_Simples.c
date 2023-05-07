#include <stdio.h>
 
int main() {
 
   int cp1, np1, cp2, np2;
   float vp1, vp2, prod1, prod2, valorTotal;
   
   scanf("%d%d%f", &cp1, &np1, &vp1);
   scanf("%d%d%f", &cp2, &np2, &vp2);
   
   prod1 = np1 * vp1;
   prod2 = np2 * vp2;
   valorTotal = prod1 + prod2;
   
   printf("VALOR A PAGAR: R$ %.2f\n", valorTotal);
 
    return 0;
}
