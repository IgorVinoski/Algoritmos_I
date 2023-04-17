#include<iostream>

#include<cstdio>

#include<cstdlib>

using namespace std;


main()
{
    int num, i, x, cont=0, soma=0;

    cont =0;
    i=1;

    while(i<3){
        cout << "Informe num: ";
        cin >> num;
        soma =0;
        x = 1;
        while(x<num){
            if(num%x == 0){
                cout << x<< endl;
                soma+=x;
            }
            x++;
        }
            if(soma == num){
                cont++;
            }
        i++;
        }

        cout << cont << endl;

    }

