#include<iostream>

#include<cstdio>

#include<cstdlib>

using namespace std;

/*
4 - Foi feita uma estatística em cinco cidades brasileiras para coletar dados sobre acidentes de trânsito.
Foram obtidos os seguintes dados:
a) código da cidade;
b) número de veículos de passeio;
c) número de acidentes de trânsito com vítimas.
Deseja-se saber:
a) qual é o maior e qual é o menor índice de acidentes de trânsito e a que cidades pertencem;
b) qual é a média de veículos nas cinco cidades juntas;
c) qual é a média de acidentes de trânsito nas cidades com menos de 2.000 veículos de passeio.
*/
int getCodCidadeMaisVeiculos(int , int , int );
int getMediaAcidentes2000Veiculos(int, int);
main()
{
    int codigoCidade;
    int numeroVeiculos;
    int numeroAcidentes;
    int somaVeiculos=0;
    int mediaAcitente2000;
    int codMaior;
    int codMenor;
    int codCidadeMaisVeiculos;
    int codCidadeMenosVeiculos;
    int i =1;
    int  maior = numeroVeiculos;
    int  menor = numeroVeiculos;

    while(i <= 3){
        i++;
        if(i==1){
            maior = numeroVeiculos;
            menor = numeroVeiculos;
        }else{
            cout << "Informe o codigo da cidade: ";
            cin >> codigoCidade;
            cout << "Informe o numero de veiculos da cidade: ";
            cin >> numeroVeiculos;
            cout << "Informe o numero de acidentes da cidade: ";
            cin >> numeroAcidentes;
            somaVeiculos += numeroVeiculos;
                   if(numeroVeiculos>maior){
                    maior = numeroVeiculos;
                    codCidadeMaisVeiculos = codigoCidade;
                    }
                    if(numeroVeiculos<menor){
                    menor = numeroVeiculos;
                    codCidadeMenosVeiculos = codigoCidade;
                    }


        }


           mediaAcitente2000 = getMediaAcidentes2000Veiculos(numeroVeiculos, numeroAcidentes);


    }


    cout << "Maior numero de veiculos " << maior << "Cidade: " << codCidadeMaisVeiculos << endl;
    cout << "Maior numero de veiculos " << menor << "Cidade: " << codCidadeMenosVeiculos << endl;
    cout << "Media veiculos: " << (somaVeiculos/5) << endl;
    cout << "Media acidentes com menos de 2000 veiculos " << mediaAcitente2000 << endl;
}



int getMediaAcidentes2000Veiculos(int numeroVeiculos, int numeroAcidentes){
    int qtdMenosDeDoisMil =0;
    int somaAcidentesMenosDeDoisMil =0;
    if(numeroVeiculos <2000){
            qtdMenosDeDoisMil++;
            somaAcidentesMenosDeDoisMil+=numeroAcidentes;
    }
    return somaAcidentesMenosDeDoisMil/qtdMenosDeDoisMil;
}
