#include<iostream>

#include<cstdio>

#include<cstdlib>
#include<ctime>


using namespace std;
/*
3 – Faça um algoritmo que leia um vetor V[7] de números inteiros :
a) Na hora de ler cada valor do vetor verifique se este elemento já existe no vetor V, obrigando que
todos os elementos sejam diferentes, não pode existir números iguais.
b) Conte quantos números lidos no vetor são maiores que 60.
c) Crie um Vetor P com somente os valores pares do vetor V.
d) Ordene de forma decrescente o vetor P.
e) Mostre o vetor P.
*/

main()
{
    int qtdMaiorQue60=0;
    int v[7];

    int index;
    int qtdPar = 0;
    int vPar[qtdPar];
    int valorPar;
    int valor;
    bool existe =false;
    srand(time(NULL)); //inicializando o randômico
    for(int i =0; i<7;i++){
        valor = rand() % 101;
        //cout << "informe: " << endl;
        //cin >> valor;
        if(i!=0){
            for(int j = 0 ; j<i;j++){
            existe = false;
            if(valor == v[j]){
                index = j;

                cout << "esse valor ja existe na psoicao: " << j;
                i--;
                existe =true;
            }
            if(!existe){
               v[i]=valor;
            }
        }
    }else{
        v[0] = valor;
    }
    }




    cout << "\n";
    cout << "\n";
    cout << "VETOR GERADO " <<endl;
    for(int i= 0;i<7; i++){
        cout << v[i] << ", ";
    }

    for(int i = 0; i<7; i++){
        if(v[i]>60){
            qtdMaiorQue60++;
        }
    }
    cout << "\n";
    cout << "Existem: " << qtdMaiorQue60 << " numeros maiores que 60. " << endl;

    for(int i = 0 ; i<7;i++){
        if(v[i]%2==0){
            vPar[qtdPar]=v[i];
            qtdPar++;
        }
    }
    cout << "O vetor de numeros pares: " << endl;
    for(int i = 0 ; i<qtdPar; i++){
        cout << vPar[i] << ", ";
    }
    cout << "\n";
    cout << "Ordenando de forma descrente: " << endl;
        for(int i = 0; i<qtdPar; i++){
            int maior = i;
            int aux;
            for(int j = 0 ; j<qtdPar; j++){
               if(vPar[j]>v[maior]){}
                maior = j;
            }
             if(vPar[i]<vPar[maior]){
                    aux = vPar[i];
                    vPar[i]= vPar[maior];
                    vPar[maior]=aux;
                }
        }
        cout << "Vetor ordenado: " << endl;
        for(int i = 0 ; i<qtdPar;i++){
            cout << vPar[i] << ", ";
        }


}
