#include <stdio.h>

int main()
{
    int A, B;
    
    printf("Por favor, informe a variável A (número inteiro): ");
    scanf("%d", &A);
    
    printf("Agora, informe a variável B (número inteiro): ");
    scanf("%d", &B);
    
    printf("A = %d\nB = %d\n", A, B);
    
    A = (A + B);
    B = (A - B);
    A = (A - B);
    
    printf("Após a troca:\nA = %d\nB = %d\n", A, B);

    return 0;
}
