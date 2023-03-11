#include<iostream>
#include<cstdio>
#include<cstdlib>

using namespace std;

/*

Escreva um programa que leia a idade de um nadador, classifique-o em uma das seguintes
categorias:
IDADE CATEGORIA
5 a 7 Infantil
8 a 10 Infanto-juvenil
11 a 13 Juvenil A
14 a 17 Juvenil B
Acima de 17 Adulto
*/
main()
{

    int idade;
    cout << "Digita a idade do nadador: ";
    cin >> idade;

    if(idade >= 17){
                cout << "Adulto";
    }


    switch(idade)
    {
        case 5 ... 7 :
            cout << "INFANTIL";
            break;
        case 8 ... 10 :
            cout << "INFANTIL";
            break;
        case 11 ... 13 :
            cout << "INFANTIL";
            break;
        case 14 ... 17 :
            cout << "INFANTIL";
            break;
        default :
            cout << "IDADE INVÁLIDA";
            break;

    }
}
