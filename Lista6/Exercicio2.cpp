#include<iostream>

#include<cstdio>

#include<cstdlib>

using namespace std;
/*
2 � Fa�a um algoritmo que solicite a digita��o de v�rios n�meros inteiros, validar para aceitar somente
n�meros maiores que 0 e menores que 51, ap�s a leitura de cada n�mero o programa deve perguntar
se o usu�rio deseja ler um novo valor (�S� � sim, �N� � n�o) quando o usu�rio escolher �N� o programa
deve encerrar a entrada de dados e apresentar:
- O total de n�mero lidos;
- O percentual de n�meros pares entre os lidos;
- O percentual de n�meros �mpares entre os lidos;
*/

main()
{
    int n, i=0, soma=0, pares=0, impares=0;
    char again;


    do{
        cout << "Informe um numero maior que zero menor que 51. ";
        cin >> n;

        if(n<0&&n>51){
            break;
        }else{
            if(n%2==0){
            pares++;
        }else{
            impares++;
            }
        i++;
        soma+=n;
        fflush(stdin);
        cout << "Deseja continuar? \n'S' - sim \n 'N' - nao ";
        cin >> again;
        }

    }while(again =='S');
            float percentualImpares = impares/i;
            float percentualPares = pares/i;
            cout << "Percentual Impares: " << percentualImpares << endl;
            cout << "Percentual Pares: " << percentualPares << endl;




}
