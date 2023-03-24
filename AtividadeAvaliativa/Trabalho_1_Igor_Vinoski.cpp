#include<iostream>
#include<cstdio>
#include<cstdlib>

using namespace std;


main()
{
    float salario_minimo;
    int num_horastrabalhadas;
    int pcd;
    int num_dependentes;
    int num_horasextras;
    float valor_imposto;
    float salario_bruto;
    cout << "Informe o valor do salario minimo: ";
    cin >> salario_minimo;

    cout << "Informe o numero de horas trabalhadas: ";
    cin >> num_horastrabalhadas;

    cout << "Informe o numero de horas trabalhadas: ";
    cin >> num_horasextras;


    cout << "Informe o numero de dependentes: ";
    cin >> num_dependentes;


    cout << "Possui alguma deficiencia? \n 1 - sim \n 0 - nao \n";
    cin >> pcd;



    float valor_hora = salario_minimo/10;

    float salario_mes = (valor_hora*num_horastrabalhadas);

    salario_bruto = salario_mes + (num_dependentes*32) + (num_horasextras *  (valor_hora*1.5));

    if(salario_bruto < 2500.00 || pcd == 1){
        cout << "\n";
    }else if(salario_bruto > 2500.00 && salario_bruto < 4999.00){
        valor_imposto = salario_bruto * 0.1;
    }else if(salario_bruto > 5000.00 && salario_bruto < 6999.00){
        valor_imposto = salario_bruto * 0.18;
    }else if(salario_bruto > 6999.00 ){
        valor_imposto = salario_bruto * 0.25;

    }

       if(salario_minimo < 0 || num_horastrabalhadas < 0 || num_dependentes < 0 || num_horasextras < 0){
        cout << "Entrada invalida. \n";

    }else {
    cout << "------ SAIDA -------- \n";
    cout << "Salario bruto: " << salario_bruto << "\n";
    valor_imposto > 0 ? cout << "Valor imposto: " << valor_imposto << " \n": cout << "Isento de imposto de renda. \n ";
    cout << "Salario liquido: " << salario_bruto - valor_imposto << "\n";

    }

}
