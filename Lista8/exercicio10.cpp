#include<iostream>

#include<cstdio>

#include<cstdlib>

using namespace std;


main()
{
    int altura, i=0, j=0, c=0;
    cout << "Informe a altura desejada para o triangulo: " << endl;
    cin >> altura;
    if(altura>3 && altura < 20){

    while(i<altura){
        i++;
        j=0;
        while(i>j){
                j++;
                cout << "*";
        }
        cout << "\n";
    }

    }

}

/*
*
**
***
****
*****
******
*/
