#include<iostream>

#include<cstdio>

#include<cstdlib>

using namespace std;


main()
{

    int num;
    cout << "Informe o num";
    cin >> num;
        if(num > 10)
        {

            if(num %2==0)
                cout << num + 2;
            else
                cout << num -2;
        }
        else
            cout << "Numero invalido";
        }
