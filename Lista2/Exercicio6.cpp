#include<iostream>

#include<cstdio>

#include<cstdlib>

using namespace std;

/*
Leia um valor inteiro, que é o tempo de duração em segundos de um determinado evento em uma fábrica, e
informe-o expresso no formato
Entrada
O arquivo de entrada contém um valor inteiro N.
Saída
Imprima o tempo lido no arquivo de entrada (segundos), convertido para horas:minutos:segundos, conforme
exemplo Fornecido.

Exemplo de Entrada
556
1
140153
Exemplo de Saída
38: 55: 53
*/

main()
{
int time;
int horas;
int rhoras;
int minutos;
int segundos;

cout << "Informe os segundos de execução: ";

cin >> time;

horas = time/(60*60);
rhoras = time%(60*60);

minutos = rhoras/60;
segundos = rhoras%60;



cout << horas <<":" << minutos<< ":" << segundos;
}
