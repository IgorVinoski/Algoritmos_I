#include<iostream>

#include<cstdio>

#include<cstdlib>

using namespace std;

/*
4 - Foi feita uma estat�stica em cinco cidades brasileiras para coletar dados sobre acidentes de tr�nsito.
Foram obtidos os seguintes dados:
a) c�digo da cidade;
b) n�mero de ve�culos de passeio;
c) n�mero de acidentes de tr�nsito com v�timas.
Deseja-se saber:
a) qual � o maior e qual � o menor �ndice de acidentes de tr�nsito e a que cidades pertencem;
b) qual � a m�dia de ve�culos nas cinco cidades juntas;
c) qual � a m�dia de acidentes de tr�nsito nas cidades com menos de 2.000 ve�culos de passeio.
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
