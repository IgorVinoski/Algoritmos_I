#include<iostream>

#include<cstdio>

#include<cstdlib>

using namespace std;
/*
8 – Desenvolva um programa que leia um valor inteiro N, sendo 4 ≤ N ≤ 50. Em seguida, imprima o padrão conforme
os exemplos abaixo.
******
     *
    *
   *
  *
 *
*****
*/

main()
{
    int n;
    do{


        for(int i =0;i<n;i++){
            cout << "*";
        }
        cout << "\n";
        for(int i=0; i<=n-1; i++){
            for(int j=n;j>i+1;j--){
                cout << " ";
            }
            cout << "*\n";
        }
        for(int i =0;i<n;i++){
        cout << "*";
        }
        cout << "\n";

        cout << "Informe o valor N: " << endl;
        cin >> n;
    }while(n>=4 && n<=50);

}
