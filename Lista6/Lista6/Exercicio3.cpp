#include<iostream>

#include<cstdio>

#include<cstdlib>

using namespace std;
/*
Faça um algoritmo que apresente um menu com as seguintes opções:
0 – Sair
1 – Ler um valor
2 – Mostrar os números de 1 até o valor lido
3 – Verificar se o número lido é par ou é ímpar
OBS: ao escolher opção inválida do menu o sistema deve exibir mensagem com esta informação, as
opções 2 e 3 só podem ser acionadas após ter sido acionada a opção 1
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
