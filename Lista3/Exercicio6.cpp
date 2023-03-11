#include<iostream>

#include<cstdio>

#include<cstdlib>

using namespace std;
/*
6 - Escreva um programa que leia as coordenadas (x,y) de um ponto em um plano cartesiano (conforme
figura apresentada abaixo) e determine em qual quadrante ele se encontra. Se o ponto estiver sobre um
dos eixos, o programa deve apresentar esta informação e qual o eixo, se estiver na origem (união dos
dois eixos) deve apresentar esta informação.
*/

main()
{
    int x, y;
    cout << "Digite a coordenada X: ";
    cin >> x;
    cout << "Digite a coordenada Y: ";
    cin >> y;

    if(x==0 && x==y){
        cout << "Está sobre a origem: 0,0 ";

    }else if(x>0 && y > 0){
        cout << "Está no primeiro quadrante, tanto x quanto y são positivos.";
    }else if(x<0 && y> 0){
        cout << "Está no segundo quadrante, X negativo Y positivo. ";
    }else if(x<0 && y < 0){
        cout << "Está no terceiro quadrante, tanto x quanto y negativos. ";
    }else if(x>0 && y < 0){
        cout << "Está no quarto quadrante, x positivo y negativo.";
    }


}
