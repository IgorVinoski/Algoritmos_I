#include<iostream>

#include<cstdio>

#include<cstdlib>

using namespace std;
/*
Fa�a um algoritmo que apresente um menu com as seguintes op��es:
0 � Sair
1 � Ler um valor
2 � Mostrar os n�meros de 1 at� o valor lido
3 � Verificar se o n�mero lido � par ou � �mpar
OBS: ao escolher op��o inv�lida do menu o sistema deve exibir mensagem com esta informa��o, as
op��es 2 e 3 s� podem ser acionadas ap�s ter sido acionada a op��o 1
*/

main()
{
    int menu, valor, i=0, confirmaValor=0;



    do{

        cout << "---------------------//---------------------"<< endl;
        cout << "0 - SAIR"<< endl;
        cout << "1 - Ler um valor"<< endl;
        cout << "2- Mostrar os valores de 1 ate o numero lido"<< endl;
        cout << "3- Verificar se o numero lido e par ou impar."<< endl;
        cout << "---------------------//---------------------"<< endl;
        cin>>menu;
            switch(menu){
        case 0:
            break;
        case 1:
            cout << "Informe um valor: "<< endl;
            cin >>valor;
            confirmaValor++;
            break;
        case 2:
            if(confirmaValor==0){
                cout << "as opCOes 2 e 3 sO podem ser acionadas apOs ter sido acionada a opCAOo 1"<< endl;
                break;
            }else{
                while(i<valor){
                i++;
                cout << i;
            }
            break;
            }

        case 3:
            if(confirmaValor==0){
                cout << "as opCOes 2 e 3 sO podem ser acionadas apOs ter sido acionada a opCAOo 1" << endl;
                break;
            }else{
                if(valor%2==0){
                cout << "PAR! "<< endl;
            }else{
                cout << "IMPAR! "<< endl;
            }
            break;
            }

        default:
            cout << "OPCAO INVALIDA"<< endl;
        }

    }while(menu!=0);

}
