#include <stdio.h>
 
int main() {
    float a, b, c, a1, b1, c1, med;
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);
    
    a1 = a * 2;
    b1 = b * 3;
    c1 = c * 5;
    
    med = (a1 + b1 + c1)/ 10;
    
    printf("MEDIA = %.1f\n",med );
 
    return 0;
}
