#include <stdio.h>
#include<math.h>
#define PI 3.14159
 
int main() {
 
    float raio;
    scanf("%f", &raio);
    
    double volume = (4.0/3) * PI * pow(raio, 3);
    
    printf("VOLUME = %.3f\n", volume);
 
    return 0;
}
