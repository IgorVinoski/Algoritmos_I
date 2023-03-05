#include<iostream>

#include<cstdio>

#include<cstdlib>

using namespace std;

/*
Um plano de fidelidade acumula 1 ponto a cada R$ 5,00 gastos em compras nas lojas afiliadas. Faça
um algoritmo para ler o valor de 4 compras feitas por um cliente e exibir quantos pontos ele
acumulou no total.
Observação: considere que o cliente pode acumular pontos fracionários.
*/

main()
{

int valor_compras;
int fidelidade = 0;
cout << "Informe o valor da: ";
for(int i =0;i<4;i++){
    cout << "Informe o valor da compra: ";
    cin >> valor_compras;
    fidelidade += valor_compras/5;
}
cout << "A quantidade de pontos é de: " << fidelidade;

}
