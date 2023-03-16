#include<iostream>
#include<cstdio>
#include<cstdlib>

using namespace std;
/*
5 - O sindicato das escolas da rede particular de ensino orienta os diretores que fazem o
pagamento de seus professores por hora/aula que devem seguir a tabela aprovada em
assembleia do sindicado, conforme apresentada abaixo:
Professor Nível 1 R$ 12.00 por hora/aula
Professor Nível 2 R$ 17.00 por hora/aula
Professor Nível 3 R$ 24.35 por hora/aula
Professor Nível 4 R$ 29.50 por hora/aula
Faça um algoritmo que receba o nível em que o professor se encontra na carreira (o sistema não deve
aceitar informar nível diferente dos níveis apresentados acima), o número de horas que ele trabalha no
mês e o valor do salário base que ele recebe. A seguir calcule se o valor está correto em relação a tabela
do sindicato e apresente os seguintes resultados:
Valor atual:
Valor pela tabela do sindicato:

Situação: (deve exibir o percentual que ele recebe a mais ou a menos em relação a tabela do sindicato),
caso esteja igual deve exibir a mensagem dizendo “valor correto”;
Exemplo:
Informe o Nível: 2
Informe o número de Horas/mês trabalhadas: 80
Informe sua Remuneração: R$ 1240.00
Resultado exibido:
Valor atual: R$ 1240.00
Valor pela tabela do sindicato: R$ 1360.00
Situação: -9.68 %
Ou seja o referido professor recebe 9.68% a menos do que deveria receber pela orientação do sindicato.

*/

main()
{

    int nivel;
    int horas;
    float salario;
    cout << "Informe o nível: \n Professor Nível 1 R$ 12.00 por hora/aula \n Professor Nível 2 R$ 17.00 por hora/aula \n Professor Nível 3 R$ 24.35 por hora/aula \n Professor Nível 4 R$ 29.50 por hora/aula  \n DIGITE O NIVEL: ";
    cin >> nivel;

    cout << "Informe o numero de horas trabalhadas: ";
    cin >> horas;
    cout << "Informe o salário: ";
    cin >> salario;

    float n_salario;
    switch(nivel){
        case 1:
            n_salario = 12*horas;
            if(salario ==  n_salario){
                    cout << "O salário atual esta correto. ";
            }else {
                 if(salario !=  n_salario){
                cout << "O salaio deveria ser igual a: " <<  n_salario;
                cout << "\nO professor recebe  " << ((n_salario/salario)-1)*100 << " a menos do que deveria";

            }
            }

            break;
        case 2:
            n_salario = 17.0*horas;
            if(salario == n_salario){
                    cout << "O salário atual esta correto. ";
            }else {
                 if(salario != n_salario){
                cout << "O salaio deveria ser igual a: " << n_salario ;
                cout << "\nO professor recebe  " << ((n_salario/salario)-1)*100 << " a menos do que deveria";
            }
            }
            break;
        case 3:
            n_salario = 24.35*horas;
            if(salario == n_salario){
                    cout << "O salário atual esta correto. ";
            }else {
                 if(salario != n_salario){
                cout << "O salaio deveria ser igual a: " << n_salario ;
                cout << "\nO professor recebe  " << ((n_salario/salario)-1)*100 << " a menos do que deveria";
            }
            }
            break;
        case 4:
            n_salario = 29.5*horas;
            if(salario == n_salario){
                    cout << "O salário atual esta correto. ";
            }else {
                 if(salario != n_salario){
                cout << "O salaio deveria ser igual a: " << n_salario ;
                cout << "\nO professor recebe  " << ((n_salario/salario)-1)*100 << " a menos do que deveria";
            }
            }
            break;
        default:
            cout << "Entrada de nivel invalida."
            break;

    }
}
