#include <stdio.h>

int main()
{
    int yearOfBirth, currentYear;
    
    printf("Por favor, insira o ano de nascimento: ");
    scanf("%d", &yearOfBirth);
    printf("Agora, insira o ano atual: ");
    scanf("%d", &currentYear);
    
    printf("Essa pessoa tem %d anos, e terá %d anos em 2050.", currentYear-yearOfBirth, 2050 - yearOfBirth);
    
    return 0;
}