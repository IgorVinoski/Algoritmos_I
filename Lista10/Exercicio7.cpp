#include<iostream>

#include<cstdio>

#include<cstdlib>
#include<ctime>

using namespace std;
/*
7 � Escreva um programa que gere um vetor de 30 posi��es de n�meros inteiros, ap�s
realize as seguintes a��es:
- Exibir o vetor na tela, mostrando 5 elementos por linha e separando cada elemento com uma
tabula��o
- Mostrar a soma dos elementos pares existentes no vetor
- Mostrar o percentual de elementos �mpares existentes no vetor
- Realizar a troca de elementos de forma que o maior elemento troque de lugar com o �ltimo elemento
do vetor e o menor elementos troque de lugar com o primeiro elemento do vetor, exibir o vetor ap�s
as trocas.
*/

main()
{
    int vet[30];
    int somaPares = 0;
    int maior, menor;
    int posicaoMaior, posicaoMenor, aux;
    int quantImpares = 0;
    srand(time(NULL));
    for(int i = 0; i<30; i++){
        vet[i] = rand() % 1000;
        cout << vet[i] << " ,";
        if(vet[i] % 2 == 0){
            somaPares = vet[i];
        }else{
            quantImpares++;
        }

        if(i == 0){
            maior = vet[i];
            posicaoMenor = i;
            menor = vet[i];
            posicaoMaior =i;
        }else if(vet[i]> maior){
        maior = vet[i];
        posicaoMaior=i;
        }else if(vet[i]<menor){
        menor = vet[i];
        posicaoMenor = i;
        }

    }
    cout << "Maior: " << maior << endl;
    cout << "Menor: " << menor << endl;
    system("PAUSE");

    aux = vet[0];
    vet[0] = menor;
    vet[posicaoMenor] = aux;

    aux = vet[29];
    vet[29] = maior;
    vet[posicaoMaior] = aux;


    cout << "Soma dos numeros pares: " << somaPares << endl;

    for(int i =0; i<30; i= i + 5){
        for(int j = 0; j<5; j++){
            cout << vet[j+i] << "\t";

        }
        cout << "\n";
    }

}
