#include<iostream>

#include<cstdio>

#include<cstdlib>

using namespace std;
/*
9 - Fa�a um programa para gerenciar as hospedagens de um hotel, contendo 12 quartos
dispon�veis. Para gerenciar os quartos, crie um vetor de inteiros V[12] e atribua zero para
todas as posi��es (todos os quartos vagos).
O programa dever� apresentar um menu com as seguintes op��es:
1) Efetuar reserva:
- O programa dever� ler o n�mero n do quarto e a quantidade q de h�spedes.
- Armazenar a reserva no vetor: V[n] = q;
2) Listar todos os quartos
- Percorrer o vetor e mostrar a quantidade de h�spedes de cada quarto.
3) Listar os quartos vagos
- Percorrer o vetor e mostrar o n�mero dos quartos em que a quantidade de h�spedes � zero.
4) Mostrar o total de pessoas hospedadas no hotel
- Efetuar a soma de todos os elementos do vetor.
5) Efetuar sa�da:
- O programa dever� ler o n�mero n do quarto.
- Atribuir zero para quantidade de h�spedes do quarto n: V[n] = 0;
6) Listar quartos ocupados cujo n�mero de h�spedes seja maior ou igual a um valor inteiro �x�,
sendo que esse valor deve ser informado pelo usu�rio.
Observa��es:
- Para sair do programa o usu�rio dever� escolher a op��o 0 �zero� do menu.
- Ao efetuar uma reserva de um quarto j� ocupado o programa dever� emitir uma mensagem de
erro.
- Validar o n�mero do quarto nas op��es 1 e 5, caso seja informado um quarto inexistente apresentar
uma mensagem com esta informa��o.
*/

main()
{
    int v[12];
    int numeroQuarto;
    int numeroOcupantes;
     int somaHospedes=0;
    int opcao;
    for(int i =0;i<12; i++){
        v[i]=0;
    }

    cout << "SISTEMA DE GERENCIAMENTO DO HOTEL " << endl;
    cout << "1) Efetuar reserva: " << endl;
    cout << "2) Listar todos os quartos: " << endl;
    cout << "3) Listar todos os quartos vagos: " << endl;
    cout << "4) Mostrar o total de pessoas hospedadas no hotel: " << endl;
    cout << "5) Efetuar saida (checkout): " << endl;
    cout << "6) Informe o numero X de ocupantes para saber a quantidade de quartos com esse numero. " << endl;
    cin >> opcao;

    switch(opcao){
        case 1:
            cout << "Informe o numero do quarto: " << endl;
            cin >> numeroQuarto;
            cout << "Informe o numero de ocupantes: " << endl;
            cin >> numeroOcupantes;
            v[numeroQuarto] = numeroOcupantes;
            break;
        case 2:
            for(int i = 0; i<12; i++){
                cout << "A quantidade de ocupantes no quarto " << i+1 << " e de: " << v[i] << endl;

            }
            break;
        case 3:
            for(int i = 0 ; i<12; i++){
                if(v[i] == 0){
                    cout << "O quarto: " << i + 1 << " esta vago.";
                }
            }
            break;
        case 4:
            somaHospedes=0;
            for(int i =0; i<12; i++){
                somaHospedes+=v[i];
            }
            cout << "A soma de hospedes e: " << somaHospedes << endl;
            break;
        case 5:
            int numQ;
            cout << "Informe o numero do quarto: " << endl;
            cin >> numQ;
            v[numQ] = 0;
        break;
        case 6:
            int x;
            cout << "Infome o numero X de hospedes para saber quais quartos tem esse numero. " << endl;
            cin >> x;
            for(int i =0;i<12;i++){
                if(v[i] >=x){
                    cout << "O quarto " << i+1 << ".";
                }
            }
            break;
        case 0:
            cout << "ENCRREANDO PROGRAMA \n";
            break;
        default:
                cout << "Informe uma op��o v�lida. \n";
            break;

    }



}
