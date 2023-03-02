#include<iostream>

#include<cstdio>

#include<cstdlib>

using namespace std;


main()
{
int ano_nascimento, ano_atual, idade_atual, idade_futura;


printf("Informe o seu ano de nascimento: ");
scanf("%d", &ano_nascimento);

printf("Informe o ano atual ");
scanf("%d", &ano_atual);


idade_atual = ano_atual-ano_nascimento;
idade_futura = 2063-ano_nascimento;

printf("A sua idade atual é de: %d \n a sua idade em 2063 será de : %d", idade_atual, idade_futura);
}
