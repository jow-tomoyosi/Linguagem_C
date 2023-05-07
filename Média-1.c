#include <stdio.h>
 
int main() {
 
  float nota1, nota2, not1, not2, med;
  scanf("%f", &nota1);
  scanf("%f", &nota2);
  
  not1 = nota1 * 3.5;
  not2 = nota2 * 7.5;
  
  med = (not1 + not2)/ 11;
  
  printf("MEDIA = %.5f\n", med);
    return 0;
}
