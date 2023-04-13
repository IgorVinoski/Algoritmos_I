#include<iostream>

#include<cstdio>

#include<cstdlib>

using namespace std;
/*
Construa um algoritmo que apresente um menu com três opções: (1) média aritmética, (2) média
ponderada e (3) sair. O programa deve executar a opção escolhida pelo usuário com base nos seguintes
critérios:



1 média aritmética            Ler dois duas notas calcular e mostrar a média aritmética.


2 média onderada    Ler três notas e seus res ectivo esos calcular e mostrar a média onderada.

3 sair



*/

main()
{
    int opcao, n1, n2, n3, p1, p2, p3;
    float media=0;
    while(opcao!=3){
        cout << "-----------------------" << endl;
        cout << "1 - MEDIA ARTMIETICA   "<<endl;
        cout << "2 - MEDIA PONDERADA    "<<endl;
        cout << "3 - SAIR               "<<endl;
        cout << "-----------------------" << endl;

        cin >> opcao;
       fflush(stdin);


        switch(opcao){
            case 1:
                cout<<"Informe a nota 1:"<<endl;
                cin >> n1;
                cout<<"Informe a nota 2:"<<endl;
                cin >> n2;
                media = (n1+n2)/2;
                cout << "A media e de: " << media << endl;
                fflush(stdin);
                break;
            case 2:
                cout<<"Informe a nota 1:"<<endl;
                cin >> n1;
                cout<<"Informe a nota 2:"<<endl;
                cin >> n2;
                cout<<"Informe a nota 3:"<<endl;
                cin >> n3;
                cout<<"Informe o PESO da nota 1:"<<endl;
                cin >> p1;
                cout<<"Informe o PESO da nota 2:"<<endl;
                cin >> p2;
                cout<<"Informe o PESO nota 3:"<<endl;
                cin >> p3;

                media = ((n1*p1)+(n2*p2)+(n3*p3))/p1+p2+p3;
                cout << "A media e: " << media << endl;
                system("pause");
                break;
            case 3:
                cout << "ENCERANDO O PROGRAMA!!!!";
                break;
            default:
                cout << "SELECIONE UMA OPÇÃO VALIDA!!!! " << endl;
                break;

        }

    }
}
