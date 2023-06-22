#include<iostream>

#include<cstdio>

#include<cstdlib>

using namespace std;

/*
3 – Escreva um programa que gere valores inteiros para preencher uma matriz 6 x 5, apresente a matriz
na tela em seguida execute a troca dos elementos desta matriz, de tal forma que os elementos da
primeira linha sejam trocados com os elementos da última linha, da segunda linha com a penúltima linha
e assim sucessivamente. Apresente a matriz após as trocas.
*/

main()
{
    int matriz[6][5];
    for(int linha = 0; linha<6; linha++){
        for(int coluna = 0; coluna<5; coluna++){
            matriz[linha][coluna] = rand() % 50;

            cout << matriz[linha][coluna] << "\t";

        }
        cout << "\n";
    }
    cout << "\n";
    cout << "Nova matriz: " << endl;
    cout << "\n";
    int aux;
    for(int linha = 0; linha <3; linha++){
        for(int coluna =0; coluna<5; coluna++){
            aux = matriz[linha][coluna];

            matriz[linha][coluna]=matriz[5-linha][coluna];
            matriz[5-linha][coluna]=aux;


        }
        cout << "\n";
    }


        for(int linha = 0; linha<6; linha++){
        for(int coluna = 0; coluna<5; coluna++){

            cout << matriz[linha][coluna] << "\t";

        }
        cout << "\n";
    }
}
