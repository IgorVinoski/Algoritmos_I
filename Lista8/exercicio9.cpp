#include<iostream>

#include<cstdio>

#include<cstdlib>

using namespace std;


main()
{
    int numLitros;
    char tipoCombustivel;

    float preco;
    const float precoGasolinaPorLitro = 2.590;
    const float precoAlcoolPorLitro = 1.650;
    cout << "Informe o numero de litros vendidos: ";
    cin >> numLitros;

    cout << "Informe o tipo do combustivel \n G - Gasolina \n A - Alcool";
    cin >> tipoCombustivel;

    switch(tipoCombustivel){
        case 'G':
            if(numLitros<=15){
                preco = (precoGasolinaPorLitro*numLitros)*0.965;
            }else{
                 preco = (precoGasolinaPorLitro*numLitros)*0.94;
            }
            break;
        case 'A':
            if(numLitros<=20){
                preco = (precoAlcoolPorLitro*numLitros)*0.97;
            }else{
                preco = (precoAlcoolPorLitro*numLitros)*0.95;

            }
        break;
    }
    cout << "O gasto em combustivel foi de: " << preco << endl;
}
