#include<iostream>

#include<cstdio>

#include<cstdlib>

using namespace std;
#define DIVISOR_VALOR_HORA 10;
const int ACRESCIMO_DEPENDENTES = 32;
float GetValorHora(float);
float GetSalarioMes(int, float);
float GetSalarioHorasExtras(int,float);
float GetSalarioBruto(float, float, int);
float GetImpostoDeRendaDevido(float);
main()
{
    float salarioMinimo ;
    int horasTrabalhadas;
    int numDependentes;
    int horasExtras;
    int pcd;
    float valorImposto;
    cout << "Informe o valor do salario minimo: ";
    cin >> salarioMinimo;
    GetValorHora(salarioMinimo);


    cout << "Informe o numero de horas trabalhadas: ";
    cin >> horasTrabalhadas;

    cout << "Informe o numero de horas extras trabalhadas: ";
    cin >> horasExtras;


    cout << "Informe o numero de dependentes: ";
    cin >> numDependentes;


    cout << "Possui alguma deficiencia? \n 1 - sim \n 0 - nao \n";
    cin >> pcd;


        float valorHora = GetValorHora(salarioMinimo);
        float salarioMes = GetSalarioMes(horasTrabalhadas, valorHora);
        float salarioHorasExtras = GetSalarioHorasExtras(horasExtras, valorHora);
        float salarioBruto = GetSalarioBruto(salarioHorasExtras, salarioMes, numDependentes);

           switch(pcd){
        case 0:
            cout << "ISENTO DE IMPOSTO DE RENDA. ";
            break;
         case 1:
             GetImpostoDeRendaDevido(salarioBruto);
            break;


        }



        valorImposto = GetImpostoDeRendaDevido(salarioBruto);

        cout << "VALOR HORA: " << valorHora << "\n";
        cout << "SALARIO MES: " << salarioMes << "\n";
        cout << "SALARIO HORAS EXTRAS: " << salarioHorasExtras << "\n" ;
        cout << "SALARIO BRUTO: " << salarioBruto << "\n" ;
        cout << "VALOR IMPOSTO: " << valorImposto << "\n";

        float salarioLiquido = salarioBruto - valorImposto;
        cout << "SALARIO LÍQUIDO: " << salarioLiquido << "\n";
}


    float GetValorHora(float salarioMinimo){
         float valorHora = salarioMinimo/DIVISOR_VALOR_HORA
         return valorHora;

    }
    float GetSalarioMes(int horasTrabalhadas, float valorHora){
        float salarioMes = valorHora*horasTrabalhadas;
        return salarioMes;
    }
    float GetSalarioHorasExtras(int horasExtras,float valorHora){
        float salarioHorasExtras = horasExtras * (valorHora*1.5);
        return salarioHorasExtras;
    }

    float GetSalarioBruto(float salarioHorasExtras, float salarioMes, int numDependentes){
        float salarioBruto = salarioHorasExtras + salarioMes + (numDependentes*ACRESCIMO_DEPENDENTES);
        return salarioBruto;
    }
    float GetImpostoDeRendaDevido(float salarioBruto){
        float valorImposto;
        if(salarioBruto < 2500.00){
            valorImposto = 0;
        }else if(salarioBruto < 5000){
            valorImposto = salarioBruto * 0.1;
        }else if(salarioBruto < 7000){
            valorImposto = salarioBruto * 0.18;
        }else{
            valorImposto = salarioBruto * 0.25;
    }
    }



