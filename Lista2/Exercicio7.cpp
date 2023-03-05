#include<iostream>

#include<cstdio>

#include<cstdlib>

using namespace std;
/*


    Leta um valor intero correspondente à idade de uma pessoa em das e Informe-a em anos. meses e das
    ObS apenas para facilitar 0 Cátulo. considere t0d0 ano com 365 dias e todo més com 30 dias. NOS casos de
    teste nunca haverá uma Situação que permite 12 meses e alguns das. como 360.363 ou 364. Este é apenas um
    exercício com 0bptrvo de testar racocimo matemático stnples.
    Entrada
    O arqutvo de entrada contém um valor intem
    Saída
    Imprtna a saída conrorme exempto fornecido.
    Exemplo de Entrada
    400

    Exemplo de Saída
    1 ano(s) 1 mes (es) 5 dia(s)

*/


main()
{

    int idade;
    cout << "Informe a sua idade: ";
    cin >> idade;

    int anos = idade/365;
    int meses = ((idade%365)/30);
    int dias = ((idade%365)%30);


    cout << anos << meses << dias;
}
