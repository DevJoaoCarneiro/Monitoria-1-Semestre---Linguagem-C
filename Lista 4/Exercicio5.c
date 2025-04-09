/*Autor.....Joao Victor
  Data......08/04/25
  Objetivo..Apresentar as potências de 3 variando de 0 a 15. Deve ser considerado que qualquer número
elevado a zero é 1, e elevado a 1 é ele próprio. Deverá ser apresentado, observando a seguinte
definição:
*/

#include <stdio.h>

int main()
{
    int i;
    int elevado = 1;

    printf("3 elevado 0 = 1\n");
    for (i = 1; i <= 15; i++)
    {
        elevado *= 3;
        printf("3 elevado %d = %d\n", i, elevado);
    }

    return 0;
}