#include<iostream>

#include<cstdio>

#include<cstdlib>
#include <math.h>
float const TAXA = 1.015; // 1+(1.5/100)
using namespace std;
/*
João possui R$ 1.800,00. Gostaria de comprar um computador que custa R$ 2.000. Ele gosta de
aplicar seu dinheiro na caderneta de poupança, que paga sempre 1,5% ao mês. Supondo que o preço
do computador não mude, escreva um algoritmo que calcule em quantos meses João irá poder comprar
o computador, mostrando a evolução de seu saldo na poupança, conforme o modelo abaixo:


https://prnt.sc/8MnGLt0zB1Hr

*/
float GetJuros(float, float);
float GetMontante(float, int);
void TabelaResultado(int, float, float, float);
main()
{
    float capitalInicial=1800;
    float montante=1800;
    float precoNotebook=2000;
    int i=1;
    float juros;
    float saldoAnterior;
    while(montante<precoNotebook){
        saldoAnterior = montante;
        montante = GetMontante(capitalInicial, i);
        juros = GetJuros(montante, saldoAnterior);
        TabelaResultado(i, saldoAnterior, juros, montante);
        i++;
    }
}
float GetMontante(float capitalInicial, int i){
    return capitalInicial*pow(TAXA, i);
}
float GetJuros(float montante, float saldoAnterior){
    float juros = montante-saldoAnterior;
    return juros;
}
void TabelaResultado(int mes, float saldoAnterior, float juros, float saldoAtual){
    if(mes==1){
        cout << "MES:\t" << "SALDO ANTRIOR\t"<<"JUROS\t"<<"SALDO ATUAL \n";
        cout << mes << "\t" << saldoAnterior << "\t \t" << juros << "\t" << saldoAtual << "\n";

    }else{
        cout << mes << "\t" << saldoAnterior << "\t \t" << juros << "\t" << saldoAtual << "\n";

    }

}
