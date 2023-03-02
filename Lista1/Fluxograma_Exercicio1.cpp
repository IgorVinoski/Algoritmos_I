#include<iostream>

#include<cstdio>

#include<cstdlib>

using namespace std;


main()
{
int estoque_medio, quant_minima, quant_maxima;
printf("Digite a quantidade mínima: ");
scanf("%d", &quant_minima);
printf("Digite a quantidade máxima: ");
scanf("%d", &quant_maxima);


estoque_medio = (quant_maxima+quant_minima)/2;

printf("O estoque médio é de: %d", estoque_medio);
}
