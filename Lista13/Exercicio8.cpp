#include<iostream>

#include<cstdio>

#include<cstdlib>

using namespace std;
/*
8 - Construa um algoritmo que:
a) Leia um número ímpar (5<= N <= 13)
- Caso o valor de N informado pelo usuário seja inválido, ou seja, fora do intervalo especificado, o programa deve
mostrar uma mensagem de erro e um novo valor deve ser lido, até que um valor válido seja digitado pelo usuário!
b) Em seguida, declare a matriz MAT de tamanho NxN.
c) Por fim, gere a matriz MAT com o seguinte padrão:


https://prnt.sc/LDNCsI6YMtFR

*/

main()
{
    int ordem;
    bool valido;
    cout << "Informe a ordem da matriz: "<<endl;
    cin >> ordem;
    if(ordem>=5 && ordem <=13 && ordem%2!=0){
        valido=true;
    }else{
        valido = false;
    }
    while(!valido){
        cout << "Informe a ordem da matriz: "<<endl;
        cin >> ordem;
        if(ordem>=5 && ordem <=13 && ordem%2!=0){
            valido=true;
        }else{
            valido = false;
        }
    }
    int matriz[ordem][ordem];
    int novaOrdem = ordem-1;
    for(int i =0; i<ordem; i++){
        for(int j =0; j<ordem; j++){
            matriz[i][j]=0;
            matriz[novaOrdem/2][j]=1;
            matriz[i][novaOrdem/2]=1;
        }

    }
    for(int i =0; i<ordem; i++){
        for(int j =0; j<ordem; j++){
                cout << matriz[i][j] << "\t";
        }
    cout << "\n";
    }


}
