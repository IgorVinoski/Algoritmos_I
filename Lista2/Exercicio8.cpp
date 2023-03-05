#include<iostream>

#include<cstdio>

#include<cstdlib>

using namespace std;

/*
    Considerando que para um consórcio, sabe-se o número total de prestações, a quantidade de
    prestações já pagas e o valor atual da prestação, escreva um algoritmo que determine o total pago
    pelo consorciado e o saldo devedor.
*/

main()
{
int numero_Prestacoes, prestacoes_Pagas;
float atual_Prestacoes;



cout << "Digite o numero total de prestações: ";

cin >> numero_Prestacoes;

cout << "Digite o numero de prestações pagas: ";
cin >> prestacoes_Pagas;

cout << "Digite o vaor atual da prestação: ";

cin >> atual_Prestacoes;

int prestacoes_Faltantes = numero_Prestacoes - prestacoes_Pagas;

float valor_total = numero_Prestacoes * atual_Prestacoes;

float valor_faltante = prestacoes_Faltantes * atual_Prestacoes;

cout << "Ainda faltam: " << prestacoes_Faltantes << " prestações \nO valor total é de: " << valor_total << "\nAinda falta: " << valor_faltante << " dinheiros";
}
