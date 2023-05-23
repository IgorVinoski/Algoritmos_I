#include<iostream>

#include<cstdio>

#include<cstdlib>

using namespace std;
/*
5 – Você foi desafiado(a) a criar um programa em C++ que encontre a moda de um conjunto de números
digitados pelo usuário. A moda é o valor que ocorre com maior frequência no conjunto. O programa deve
permitir ao usuário digitar a quantidade de números a serem lidos e, em seguida, ler os números
digitados. Após isso, o programa deve calcular e exibir a moda dos números. O programa deverá seguir
as seguintes etapas:
● Crie uma variável inteira chamada quantidadeNumeros para armazenar a quantidade de números
a serem lidos.
● Solicite ao usuário que digite a quantidade de números.
● Crie um vetor chamado numeros com tamanho igual a quantidadeNumeros para armazenar os
números digitados pelo usuário.
● Leia cada número digitado e armazená-lo no vetor numeros.
● Crie um vetor chamado frequencia com tamanho igual a quantidadeNumeros para armazenar a
frequência de cada número.
● Percorra o vetor numeros e contar a frequência de cada número, armazenando no vetor
frequencia.
● Encontre o valor com a maior frequência no vetor frequencia, que será a moda.
● Exiba a moda na tela.

Observações:
● Certifique-se de que o programa esteja devidamente documentado e com uma interface clara
para o usuário.
*/

main()
{

    int maiorFrequencia;
    int quantidadeNumeros;
    cout << "Informe a quantidade de numeros a serem lidos: " << endl;
    cin>> quantidadeNumeros;
    int frequencia[quantidadeNumeros];
    int vetor[quantidadeNumeros];
    for(int i = 0; i<quantidadeNumeros; i++){
        cout << "Informe o numero: " << i +1 << endl;
        cin>>vetor[i];

    }
    for(int i = 0;i<quantidadeNumeros; i++){
        frequencia[i]=0;
    }
    for(int i =0;i<quantidadeNumeros;i++){
        for(int j = 0;j<i;j++){
            if(vetor[j]==vetor[i]){
                frequencia[i]=frequencia[i]+1;
            }
        }
    }
    for(int i = 0 ; i<quantidadeNumeros;i++){
        cout << frequencia[i] << ", ";

    }
    cout << "\n";
    for(int i=0; i<quantidadeNumeros; i++){
        maiorFrequencia = i;
        for(int j =0;j<i; j++){
            if(frequencia[j]>frequencia[maiorFrequencia]){
            maiorFrequencia=j;
        }
        }

    }
    cout << vetor[maiorFrequencia];


}
