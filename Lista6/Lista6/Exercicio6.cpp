#include<iostream>

#include<cstdio>

#include<cstdlib>

using namespace std;
/*
6 � Supondo que a popula��o de uma cidade �A� seja de 90000, com taxa de crescimento de 3,1% ao
m�s, e que a popula��o de uma cidade �B� seja de 200000, com taxa de crescimento de 1,5% ao m�s.
Escrever um algoritmo que calcule e escreva com quantos meses a cidade �A� ultrapassa a popula��o
da cidade �B�, mantendo as taxas atuais de crescimento. Mostrar as popula��es das cidades.
*/


main()
{
    int i =1;
    int populacaoA = 90000;
    int populacaoB = 200000;
    const float CRESCIMENTOA =  3.1/100;
    const float CRESCIMENTOB =  1.5/100;


    while(populacaoA<populacaoB){
        populacaoB += CRESCIMENTOB*populacaoB;
        populacaoA += CRESCIMENTOA*populacaoA;
        i++;
    }
    cout << "meses: "<<i;


}
