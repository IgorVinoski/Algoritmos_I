#include<iostream>

#include<cstdio>

#include<cstdlib>
#include<ctime>


using namespace std;
/*
6 – Escrever um programa que gere um vetor de 80 posições com valores no intervalo de 20
a 120. Mostrar o vetor gerado exibindo 10 elementos por linha e encontrar o maior valor do
vetor e sua posição/índice; mostrá-lo juntamente com sua posição.
Exemplo para um vetor de 5 elementos:

70 | 67 | 102 | 105 | 80 |
O maior elemento 105 e sua posição 3

*/

main()

//0 1 2 3 4 5 6 7 9
//10 11 12 13 14 15 16 17 18
{
    int vet[80];
    int maior, menor;
    int posicaoMaior;
    int posicaoMenor;
    srand(time(NULL));
    for(int i = 0; i<80;i++){
        vet[i] = rand() % 101 + 20; //INTERVALO ENETRE 0 E 100 + 20, OU SEJA, SE GERAR O NUMERO 0 + 20 = 20, OU 100 + 20 = 120.
        cout << vet[i] << ", ";
    }
    system("PAUSE");
    for(int i = 0; i< 80; i= i + 10){
        for(int j =0; j<10; j++){
            cout << vet[(j+i)] << " | ";
            if(j+i == i){
                maior = vet[j+i];
                posicaoMaior= j+i;
                menor = vet[j+i];
                posicaoMenor = j+i;
            }else if((vet[j+i])>maior){
                maior = vet[j+i];
                posicaoMaior= j+i;
            }else if((vet[j+i])<menor){
                menor = vet[j+i];
                posicaoMenor = j+i;
            }
        }
        cout << "\n";
        cout << "O maior elemento e o: " << maior << " a posicao e: " << posicaoMaior << endl;
        cout << "O menor elemento e o:" << menor << "a posicao e: "<< posicaoMenor << endl;
    }
}
