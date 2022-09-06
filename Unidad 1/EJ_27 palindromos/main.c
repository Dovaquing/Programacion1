#include <stdio.h>
#include <stdlib.h>
#include "../Bibliotecas/miCtype.h"
#include "../Bibliotecas/miString.h"

int main()
{
    char frase[]="     ArriBA   La     BiRrA ";
    if(esPalindromo(frase,strLen(frase)))
        printf("es palindromo");
    else
        printf("no es palindromo");
    return 0;
}
