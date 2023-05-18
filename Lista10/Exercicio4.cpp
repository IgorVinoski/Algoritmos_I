#include<iostream>

#include<cstdio>

#include<cstdlib>
#include<ctime>
using namespace std;
/*
4 – Escreva um programa que manipule um vetor de inteiros de 10 posições, o vetor deverá
ser preenchido de forma pseudo-aleatória com valores entre 30 e 55, mostrar o vetor
gerado na tela, realizar a troca dos valores no vetor de tal forma que o primeiro passa a ser
o último, o segundo o penúltimo e assim sucessivamente. Mostre o vetor na tela após as
trocas
*/

main()
{
    int vet[10];
    int aux=0;
    srand(time(NULL));
    for (int i  =0; i<10; i++){
        vet[i] = rand() % 31 + 25;

        cout << vet[i] << endl;

    }
    system("PAUSE");
    for(int i =0; i<5; i++){
        cout << "Trocando a posicao: " << i << " pela posicao: " << 9-i <<endl;
        aux = vet[i];
        vet[i] = vet[9-i];
        vet[9-i]= aux;

    }
    system("PAUSE");
    for(int i =0; i<10;i++){
        cout << "Nova ordem: " << vet[i] << endl;
    }

}
