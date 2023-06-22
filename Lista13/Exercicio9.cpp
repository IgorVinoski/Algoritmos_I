#include<iostream>

#include<cstdio>

#include<cstdlib>

using namespace std;
/*
9 - Construa um algoritmo que realize as seguintes operações:
a) Leia um número inteiro N e gere uma matriz quadrada M[N][N] com valores aleatórios, intervalo de
20 a 70. Mostre a matriz M.
b) Encontre o maior elemento da matriz. Em seguida, substitua os elementos da diagonal principal
pelo valor encontrado. Em seguida, mostre a matriz M.
c) Leia um valor inteiro X, sendo que X deve ser maior que 20 e menor que 70. Em seguida, calcule
e mostre o percentual de elementos da matriz que são maiores que X;
d) Trocar os elementos da primeira linha da matriz pela última. Em seguida, mostre a matriz M.
Exemplo para N=4:
https://prnt.sc/LWQjHo7YmVJS
*/

main()
{
    int n;
    cout << "Informe a ordem da matriz: "<<endl;
    cin >> n;

    int m[n][n];
    int maior;
    int menor;
    for(int i =0; i<n; i++){
        for(int j=0; j<n; j++){
            m[i][j]= rand() % 50 + 20;
            cout << m[i][j] << "\t";
            if(i==0&&j==0){
                maior=m[i][j];
            }else{
                if(m[i][j]>maior){
                    maior = m[i][j];
                }
                if(m[i][j]<menor){
                    menor =m[i][j];
                }
            }
        }
        cout << endl;
    }

    cout << endl;

    int valor;
    int qtdValorParece=0;
    do{
        cout << "Informe um valor: "<<endl;
        cin >> valor;
    }while(valor<20 || valor > 70);

    for(int i =0; i<n; i++){
        for(int j=0; j<n; j++){
                if(m[i][j]>valor){
                    qtdValorParece++;
                }

        }
        cout <<endl;
    }
    cout << "Valores maiores que  " << valor << " aparecem " << qtdValorParece << " vezes. \n";
    cout << "Isso totaliza: " << (float) (qtdValorParece/(n*n))  * 100.0 << "%."<<endl;

    int aux;
    int n2=n-1;
    for(int i =0; i<1; i++){
            for(int j=0; j<n; j++){
                aux = m[i][j];
                m[i][j]=m[n2-i][j];
                m[n2-i][j]=aux;
                }
    }
    for(int i =0; i<n; i++){
        for(int j=0; j<n; j++){
            cout << m[i][j] << "\t";
        }
        cout <<endl;
    }


}
