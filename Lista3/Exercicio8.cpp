#include<iostream>

#include<cstdio>

#include<cstdlib>

void meses(int);
using namespace std;
/*
8 - Elabore um algoritmo que receba um ano (numérico inteiro) e o número do mês (1 – Janeiro, 2 –
Fevereiro, e assim sucessivamente) informe se o ano é bissexto ou não. Lembrete:
São bissextos todos os anos múltiplos de 400, ex.: 1600, 2000, 2400, 2800...
São bissextos todos os múltiplos de 4 e não múltiplos de 100, ex.: 1996, 2004, 2008, 2012, 2016...
Não são bissextos todos os demais anos.
Usando o comando switch exiba o número de dias do mês informado, sabendo que nos anos que não
são bissexto o mês 2 (fevereiro) tem 28 dias.
*/

main()
{
    int ano, mes;
    cout << "Informe o ano: ";
    cin >> ano;
    cout << "Informe o mês: ";
    cin >> mes;

    if(ano%400 == 0|| (ano%4==0 && ano%100 !=0)) {
                cout << "É bissexto. ";
                meses(mes);
    }else{
        cout << "Não é bissexto. ";
        if(mes == 2){
            cout << "tem 28 dias.";
        }else{
            meses(mes);
        }
    }


}
  void meses(int a)
    {
        switch(a){
            case 1:
                cout << "tem 31 dias. ";
                break;
            case 2:
                cout << "tem 29 dias.";
                break;
            case 3:
                cout << "tem 31 dias. ";
                break;
            case 4:
                cout << "tem 30 dias.";
                break;
            case 5:
                cout <<  "tem 31 dias.";
                break;
            case 6:
                cout << "tem 30 dias.";
                break;
            case 7 ... 8:
                cout << "tem 31 dias.";
                break;
            case 9:
                cout << "tem 30 dias.";
                break;
            case 10:
                cout << "tem 31 dias.";
                break;
            case 11:
                cout << "tem 30 dias.";
                break;
            case 12:
                cout << "tem 31 dias.";
                break;

        }
    }
