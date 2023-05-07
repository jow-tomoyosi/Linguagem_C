#include <stdio.h>
int main() {
 
    int numero, horas;
    float salario, salarioTotal;
    
    scanf("%d%d%f", &numero, &horas, &salario);
    
    salarioTotal = horas * salario;
    
    printf("NUMBER = %d\nSALARY = U$ %.2f\n", numero, salarioTotal);
 
    return 0;
}
