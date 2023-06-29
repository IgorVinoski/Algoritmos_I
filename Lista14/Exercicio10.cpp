#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<ctime>

using namespace std;

/*
10 - Uma cidade tem 4 ruas leste--oeste e 6 ruas norte--sul. Ou seja, tem 4x6 = 24
cruzamentos. Você foi contratado para elaborar um programa para controlar a matriz de
acidentes deste cenário, inicialmente a matriz deve ser zerada, ou seja, cada cruzamento deve
ter o valor zero indicando que não houve nenhum acidente no respectivo cruzamento.
O programa deverá apresentar um menu com as seguintes opções:
0 - Sair
1 – Mostrar matriz de acidentes
2 – Indicar um acidente (usuário deve informar o número da rua leste-oeste e da rua norte-sul) o sistema
deve atualizar o valor dos acidentes.
3 – Mostrar estatísticas
a. Total de acidentes registrados
b. Cruzamento com o maior número de acidentes registrados, em caso de igualdade deverá
mostrar todos os cruzamentos com este número de acidentes.
c. Rua norte-sul que concentra o maior número de acidentes.
d. Rua leste-oeste que concentra o maior número de acidentes.
*/

main(){

    int opcao;
    int totalAcidentes=0;
    int somaCruzamentos[24];
    const int linhas = 4;
    const int colunas = 6;
    int lesteOeste;
    int norteSul;
    int posicaoMaiorNumeroDeAcidentesCruzamentoLinha=0;
    int posicaoMaiorNumeroDeAcidentesCruzamentoColuna=0;
    int maiorNAcidentesC=0;
    int m[linhas][colunas];
    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++){
            m[i][j]=0;
            somaCruzamentos[j]=0;
    }
    }
    do{
        cout << "0 - SAIR" <<endl;
        cout << "1 - Mostrar matriz de acidentes" << endl;
        cout << "2 - Indicar um acidentes" << endl;
        cout << "3 - Mostrar estatisticas" <<endl;
        cin >> opcao;



    switch(opcao){
        case 1:
            for(int i = 0; i < linhas; i++){
                for(int j = 0; j < colunas; j++){
                    cout << m[i][j] << "\t";
                }
            cout << "\n";
            }
            break;
        case 2:
            cout << "Informe o numero da rua leste-oeste " <<endl;
            cin >> lesteOeste;
            cout << "Informe o numero da rua norte-sul: " << endl;
            cin >> norteSul;
            m[lesteOeste][norteSul]+=1;
            totalAcidentes++;
            break;
        case 3:
            cout << "O total de acidentes é: "<< totalAcidentes << " " << endl;
            for(int i = 0; i < linhas; i++){
                for(int j = 0; j < colunas; j++){
                    somaCruzamentos[j] += m[i][j];
                    if(j+i==0){
                        maiorNAcidentesC = m[i][j];
                        }else if(maiorNAcidentesC < m[i][j]){
                            maiorNAcidentesC = m[i][j];
                        }
                    }
                }
            cout << "O cruzamento com o maior numero de acidentes foi o: ";
            for(int i = 0; i< linhas; i++){
                for(int j = 0; j < colunas; j++){
                    if(maiorNAcidentesC == m[i][j]){
                        cout << " cruzamento da " << i << " com a " << j <<endl;
                    }
                }
            }


            int maior = 0;
            int posicaoMaiorLinha=0;
            int posicaoMaiorColuna=0;
            for(int i = 0; i < linhas; i++){
                for(int j = 0; j< colunas; j++){
                    if(j+i==0){
                        maior=m[i][j];
                    }else{
                        if(maior<m[i][j]){
                            maior = m[i][j];
                            posicaoMaiorLinha=i;
                            posicaoMaiorColuna=j;
                        }
                    }
                }
            }
            cout << "O maior numero de acidentes leste-oeste foi na: " << posicaoMaiorLinha << endl;
            cout << "O maior numero de acidentes norte-sul foi na: " << posicaoMaiorColuna << endl;


            break;
            }


    }while(opcao != 0);

}
