#include<iostream>

#include<cstdio>

#include<cstdlib>
int GetNumero(int);
void Media(int, int);
using namespace std;
/*
Escreva um programa que lê um número não determinado de valores inteiros e positivos, maiores
que 0 e menores que 5000 com base nos seguintes critérios:
● O programa deve parar de ler quando o número digitado for 0.
● No final, o programa deve mostrar a quantidade de números lidos, juntamente com a média
destes.
*/

main()
{
    int n=0, soma=0;
    int numeros = GetNumero(numeros);
    while(numeros != 0 ){
        numeros = GetNumero(numeros);
        n++;
        soma +=numeros;

    }
    Media(soma, n);


}
void Media(int soma, int n){
    float media = soma/n;
    cout << "A media é de: " << media;
}


int GetNumero(int numero){
    cout << "Informe o numero: ";
    cin >> numero;

    if((numero < 0 ) || (numero > 5000)){
        cout << "Numero invalido. ";
    }
    return numero;
}


