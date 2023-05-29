#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    printf("Por favor, insira um número inteiro: ");
    scanf("%d", &n);
    
    printf("Quadrado: %.0f\nCubo: %.0f\nRaiz quadrada: %.2f\n", pow(n, 2), pow(n, 3), sqrt(n));
    return 0;
}
