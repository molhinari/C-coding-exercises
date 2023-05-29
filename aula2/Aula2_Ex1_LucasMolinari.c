#include <stdio.h>

int main()
{
    float quotation, dolars;
    printf("Por favor, insira a cotação do dólar: ");
    scanf("%f", &quotation);
    
    printf("Agora, insira a quantia em dólares: ");
    scanf("%f", &dolars);
    
    printf("Cotação = %.2f\nQuantia em dólares = U$ %.2f\nQuantia em reais = R$ %.2f\n", quotation, dolars, quotation*dolars);

    return 0;
}
