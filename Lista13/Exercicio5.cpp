#include<iostream>

#include<cstdio>

#include<cstdlib>

using namespace std;


/*
5 – Crie um algoritmo que receba um número inteiro N, sendo 5 < N < 10, ou seja, o valor de N deve
ser maior que 5 e menor que 10. A seguir, crie uma matriz M[N][N] com valores aleatórios no intervalo
de 0 a 50 e realize as ações:
- Trocar os valores da primeira coluna (coluna 0) com a última coluna (coluna N-1). Mostre a matriz M.
- Inverter os valores da diagonal principal. Mostre a matriz M.
- Criar um vetor V[N] que armazene a soma dos elementos das duas primeiras linhas da matriz M. Mostre
V.
*/

main()
{

    int inputValue;
        cout << "Informe um valor";
        cin >> inputValue;


        //gerando a matriz.
        if(inputValue >5 && inputValue < 10){
            int matriz[inputValue][inputValue];
            for(int i = 0; i<inputValue; i++){
                for(int j=0; j<inputValue; j++){
                    matriz[i][j]= rand() % 51;
                    cout << matriz[i][j] << "\t";
                }
                cout << "\n";
            }
        //trocando os valores da primeira coluna com a ultima.

        for(int i = 0; i<inputValue; i++){
            int aux = matriz[i][0];
            matriz[i][0]= matriz[i][inputValue-1];
            matriz[i][inputValue-1]= aux;
        }

        //mostrando a nova matriz
        cout << "A nova matriz gerada: " <<endl;
        for(int i =0; i<inputValue; i++){
            for(int j=0; j<inputValue; j++){
                cout << matriz[i][j] << "\t";
            }
            cout << "\n";
        }



        //invertendo os valores da diagonal principal
        for(int i =0; i<inputValue-1/2; i++){
            int aux = matriz[i][i];
            matriz[i][i]=matriz[(inputValue-1)-i][(inputValue-1)-i];
            matriz[(inputValue-1)-i][(inputValue-1)-i]=aux;

        }
        cout <<"\n";
        cout << "diagonal princil invertida: "<<endl;
        for(int i =0;i<inputValue; i++){
            cout << matriz[i][i]<<",";
        }

        float somaDuasLinhas[2];
        for(int i = 0; i<2; i++){
            for(int j=0; j<inputValue; j++){
                somaDuasLinhas[i]+=matriz[i][j];
            }
        }
        cout << "\n";

        for(int i=0; i<2;i++){
            cout << "a soma na linha: " << i+1 << " e de: "<< somaDuasLinhas[i] <<endl;
        }

        }




}
