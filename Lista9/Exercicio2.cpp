#include<iostream>

#include<cstdio>
#include <iomanip>

#include<cstdlib>

using namespace std;
/*
2 - Escrever um programa que leia 10 números e mostre as seguintes informações sobre os
números lidos: a soma, a média, o menor, o maior, o percentual de valores pares e a
quantidade de números ímpares.
*/
float getMedia(int, float);
int getPar(int);
int getImpar(int);

main()
{

    int number;
    float soma=0;
    int maior, menor;
    int i;
    int pares=0,impares=0;
            cout << fixed << setprecision(2);

    for(i = 1; i<=3; ++i){
            cout << "Informe o numero: " << endl;
        cin >> number;

        if(i==1){
            maior=number;
            menor=number;
        }else if(number>maior){
            maior = number;
        }else if(number<menor){
            menor = number;
        }

        pares += getPar(number);
        impares += getImpar(number);


        soma+=number;
        cout << "A soma: " << soma << endl;
        cout << "Quantidade de iterações: " << i << endl;
                cout << fixed << setprecision(2);

    }
    cout << "Maior " << maior << endl;
    cout << "Media: " <<  getMedia(i, soma) << endl;
    cout << "Quantida de numeros pares: " << pares << endl;
    float percentualPares = ((float) pares/(i-1.0) *100.0);

    cout << "O percentual de pares: " << percentualPares << "%" << endl;
    cout << "A quantidade de numeros impares:" << impares << endl;
}


int getPar(int number){
    if(number%2==0){
        return 1;
    }else{
    return 0;
    }
}
int getImpar(int number){
    if(number%2!=0){
        return 1;
    }else{
    return 0;
    }
}
float getMedia(int quantidadeDeNumeros, float soma){
    return soma/(quantidadeDeNumeros-1);
}


