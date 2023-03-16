#include<iostream>
#include<cstdio>
#include<cstdlib>

using namespace std;
/*
    – Escreva um algoritmo que efetue a leitura de três valores (variáveis A, B e C) e apresente os valores
    dispostos em ordem crescente.
    */

main()
{
    float a, b, c;

    cout << "Informe o valor de A: ";
    cin >> a;
    cout << "Informe o valor de B: ";
    cin >> b;
    cout << "Informe o valor de C: ";
    cin >> c;



    if((a>b && a>c) && (b>c)){
        cout << c << b << a;
    }else{
     if((a>b && a>c) && (c>b)){
        cout << b << c << a;
    }else if(((b>a && b>c) && (a>c))){
        cout << c << a << b;
    }else if(((b>a && b>c) && (c>a))) {
        cout << a << c << b;
    }else if(c>a && c>b && a>b){
        cout << b << a << c;
    }else{
        cout << a<< b << c;
    }
    }



}
