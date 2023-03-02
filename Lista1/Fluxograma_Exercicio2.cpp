#include<iostream>

#include<cstdio>

#include<cstdlib>

using namespace std;


main()
{
int dias;
float total, valor, taxa;


printf("Informe o valor da prestação em atraso: ");
scanf("%f", &valor);

printf("Informe a taxa da prestação em atraso: ");
scanf("%f", &taxa);


printf("Informe a quantidade de dias: ");
scanf("%d", &dias);


total = valor + (valor * ((taxa/100)* dias ));


printf("O valor inicial era de: %f \n O novo valor é de %f", valor, total );
}
