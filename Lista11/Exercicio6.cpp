#include<iostream>

#include<cstdio>

#include<cstdlib>

using namespace std;
/*
6 – Você trabalha em uma empresa de análise financeira e foi designado(a) para desenvolver um
programa em linguagem C++ que faça a análise de desempenho de ações em um mês específico, tais
como média aritmética dos preços, dia de maior alta e baixa e se houve dia abaixo do valor mínimo (R$
50). O programa deverá seguir as seguintes etapas:
● Definir um vetor chamado "precosAcoes" com tamanho igual ao número de dias úteis do mês em
análise.
● Solicitar ao usuário que digite o preço de fechamento das ações de cada dia útil e armazená-los
no vetor.
● Calcular e exibir a média dos preços de fechamento das ações no mês.
● Encontrar e exibir o dia de maior alta e o dia de maior baixa, indicando seu número e valor.
● Verificar se houve algum dia em que o preço das ações ficou abaixo de um valor mínimo (por
exemplo, R$ 50) e exibir a mensagem correspondente, informando o número do dia e o valor do
preço.
Observações:

● Os preços das ações devem ser representados por valores monetários (pode-se considerar o uso
de números decimais).
● Certifique-se de que o programa esteja devidamente documentado e com uma interface clara
para o usuário.
● Teste o programa com diferentes valores de preços das ações para garantir sua correta
funcionalidade.
● Considere que o mês possui 20 dias úteis.
*/

main()
{
    float precosAcoes[20];
    float preco;
    float somaPreco=0;
    float maiorPreco;
    float menorPreco;
    int diaMaiorPreco;
    int qtdDiasX=0;
    int vqtdDiasX[20];
    float precoX;
    int diaMenorPreco;
    float vprecosDiasX[20];
    cout << "Indique um preco para saber os dias que o preco foi menor do que esse preco: "<<endl;
    cin >> precoX;
    cout << precoX;
    for(int i =0; i<20;i++){
        cout << "Digite o preco de fechamento da acao no dia: "<< i + 1 << endl;
        cin >> preco;

        precosAcoes[i]= preco;
        somaPreco+=preco;
        if(i==0){
            diaMaiorPreco=0;
            diaMenorPreco=0;
            menorPreco=preco;
            maiorPreco=preco;
        }else if(preco>maiorPreco){
            maiorPreco=preco;
            diaMaiorPreco=i+1;
        }else if(preco<menorPreco){
        menorPreco=preco;
        diaMenorPreco=i+1;
        }


    }

    for(int i = 0; i < 20; i++){
        if(precosAcoes[i] < precoX){
            vqtdDiasX[qtdDiasX] = i + 1;
            vprecosDiasX[qtdDiasX] = precosAcoes[i];
            qtdDiasX++;
        }
    }


    cout << "O maior preco foi de: " << maiorPreco << ". No dia: " << diaMaiorPreco << endl;
    cout << "O menor preco foi de: " << menorPreco << ". No dia: " << diaMenorPreco << endl;
    cout << "A media dos precos foi de: " << (float) somaPreco/20 << endl;
    cout << "Os dias com o preco abaixo de: " << precoX << endl;
    for(int i=0; i< qtdDiasX; i++){
        cout << vqtdDiasX[i] << ", " << endl;
        cout << vprecosDiasX[i] << ", " << endl;
    }
}
