#include<iostream>

#include<cstdio>

#include<cstdlib>

using namespace std;
/*
2 – Faça um algoritmo que solicite a digitação de vários números inteiros, validar para aceitar somente
números maiores que 0 e menores que 51, após a leitura de cada número o programa deve perguntar
se o usuário deseja ler um novo valor (‘S’ – sim, ‘N’ – não) quando o usuário escolher ‘N’ o programa
deve encerrar a entrada de dados e apresentar:
- O total de número lidos;
- O percentual de números pares entre os lidos;
- O percentual de números ímpares entre os lidos;
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
