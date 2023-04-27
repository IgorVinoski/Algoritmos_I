#include<iostream>

#include<cstdio>

#include<cstdlib>

using namespace std;


main()
{
    int largura, altura;
    int i =0, j=2, k=0;

    cout << "Informe a largura: ";
    cin >> largura;
    cout << "Informe a altura: ";
    cin >> altura;

    while(i<largura){
        i++;
        cout << "#";
    }
    cout << "\n";
    while(j<altura){
        j++;
        cout << "#";
            while(k<=altura){
                k++;
                cout << " ";
            }
        cout << "# \n";
    }
    i=0;
    while(i<largura){
    i++;
    cout << "#";
    }
}


