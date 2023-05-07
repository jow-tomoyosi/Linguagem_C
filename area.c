#include <stdio.h>
#include<math.h>
#define PI 3.14159
int main() {
    float a, b, c, p1, p3, p4, p5;
  
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);
    
    p1 = (a * c)/2;
    double p2 = PI * pow(c, 2);
    p3 = ((a + b)* c)/2;
    p4 = b * b;
    p5 = a * b;
    
    printf("TRIANGULO: %.3f\n", p1);
    printf("CIRCULO: %.3f\n" , p2);
    printf("TRAPEZIO: %.3f\n", p3);
    printf("QUADRADO: %.3f\n", p4);
    printf("RETANGULO: %.3f\n", p5);
    
 
    return 0;
}
