#include <stdio.h>

int main()
{
    float P1, P2, T1, T2, T3, M3, M1, M2, notaFinal;
    scanf("%f %f %f %f %f %f", &P1, &P2, &T1, &T2, &T3, &M3);
    
    M1 = (P1+P2) / 2;
    M2 = (T1+T2+T3) / 3;
    
    notaFinal = M1*0.6 + M2*0.3 + M3*0.1;
    
    printf("M1: %.2f\nM2: %.2f\nM3: %.2f\nNota final: %.2f\n", M1, M2, M3, notaFinal);

    return 0;
}