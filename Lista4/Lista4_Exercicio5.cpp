#include<iostream>
#include<cstdio>
#include<cstdlib>

using namespace std;
/*
5 - O sindicato das escolas da rede particular de ensino orienta os diretores que fazem o
pagamento de seus professores por hora/aula que devem seguir a tabela aprovada em
assembleia do sindicado, conforme apresentada abaixo:
Professor N�vel 1 R$ 12.00 por hora/aula
Professor N�vel 2 R$ 17.00 por hora/aula
Professor N�vel 3 R$ 24.35 por hora/aula
Professor N�vel 4 R$ 29.50 por hora/aula
Fa�a um algoritmo que receba o n�vel em que o professor se encontra na carreira (o sistema n�o deve
aceitar informar n�vel diferente dos n�veis apresentados acima), o n�mero de horas que ele trabalha no
m�s e o valor do sal�rio base que ele recebe. A seguir calcule se o valor est� correto em rela��o a tabela
do sindicato e apresente os seguintes resultados:
Valor atual:
Valor pela tabela do sindicato:

Situa��o: (deve exibir o percentual que ele recebe a mais ou a menos em rela��o a tabela do sindicato),
caso esteja igual deve exibir a mensagem dizendo �valor correto�;
Exemplo:
Informe o N�vel: 2
Informe o n�mero de Horas/m�s trabalhadas: 80
Informe sua Remunera��o: R$ 1240.00
Resultado exibido:
Valor atual: R$ 1240.00
Valor pela tabela do sindicato: R$ 1360.00
Situa��o: -9.68 %
Ou seja o referido professor recebe 9.68% a menos do que deveria receber pela orienta��o do sindicato.

*/

main()
{

    int nivel;
    int horas;
    float salario;
    cout << "Informe o n�vel: \n Professor N�vel 1 R$ 12.00 por hora/aula \n Professor N�vel 2 R$ 17.00 por hora/aula \n Professor N�vel 3 R$ 24.35 por hora/aula \n Professor N�vel 4 R$ 29.50 por hora/aula  \n DIGITE O NIVEL: ";
    cin >> nivel;

    cout << "Informe o numero de horas trabalhadas: ";
    cin >> horas;
    cout << "Informe o sal�rio: ";
    cin >> salario;

    float n_salario;
    switch(nivel){
        case 1:
            n_salario = 12*horas;
            if(salario ==  n_salario){
                    cout << "O sal�rio atual esta correto. ";
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
                    cout << "O sal�rio atual esta correto. ";
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
                    cout << "O sal�rio atual esta correto. ";
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
                    cout << "O sal�rio atual esta correto. ";
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
