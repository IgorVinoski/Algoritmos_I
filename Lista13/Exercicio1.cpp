#include<iostream>

#include<cstdio>

#include<cstdlib>

using namespace std;
/*
1 � Escrever um algoritmo que manipule uma matriz 5 x 5 de n�meros inteiros, o programa dever�
gerar valores pseudoaleat�rios menores que 100 para preencher a matriz, em seguida dever� mostrar
a matriz na tela, e mostrar:
O maior elemento da matriz
O menor elemento da matriz
A m�dia dos elementos da matriz
O percentual de n�mero pares na matriz
O percentual de n�meros �mpares na matriz
*/



main()
{
    int matriz[5][5];
    int maior;
    int menor;
    float soma;
    float media;
    int qtdPares=0;
    int qtdImpares=0;
    float porcentagemPares;
    float porcentagemImpares;

    for(int linha = 0; linha<5; linha++){
        for(int coluna = 0; coluna<5; coluna++){
            matriz[linha][coluna]= rand() % 100;
        }
    }

    cout << "Mostrando a matriz gerada: \n";
    for(int linha = 0; linha<5; linha++){
        for(int coluna = 0; coluna<5; coluna++){
        }
        cout << "\n";
    }


    for(int linha = 0; linha<5; linha++){
        for(int coluna = 0; coluna<5; coluna++){
                int valor = matriz[linha][coluna];
                if(valor%2==0){
                    qtdPares++;
                }else{
                    qtdImpares++;
                }
                cout << matriz[linha][coluna]<< "\t";
                soma = matriz[linha][coluna];
                if(linha==0 && coluna == 0){
                    maior = matriz[linha][coluna];
                    menor = matriz[linha][coluna];
                }else if(matriz[linha][coluna]> maior){
                    maior = matriz[linha][coluna];
                }else if(matriz[linha][coluna]< menor){
                    menor = matriz[linha][coluna];
                }
        }
        cout << "\n";
    }


    media = (float) soma/25.0;
    porcentagemPares = (float) qtdPares/25.0 * 100.0;
    porcentagemImpares = (float) qtdImpares/25.0 * 100.0;


    cout << "O maior elemente e: " << maior << endl;
    cout << "O menor elemento e: " << menor << endl;

    cout << "A media e: " << media << endl;
    cout << "A porcentagem de pares e: " << porcentagemPares << "%" << endl;
    cout << "A porcentagem de impares e: " << porcentagemImpares << "%" <<endl;










}
