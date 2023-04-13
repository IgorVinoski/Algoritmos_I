#include<iostream>

#include<cstdio>

#include<cstdlib>

using namespace std;
/*
8 – Uma empresa decidiu fazer um levantamento em relação aos candidatos que se apresentarem para
preenchimento de vagas em seu quadro de funcionários. Supondo que você seja o programador dessa
empresa, faça um programa que leia, para cada candidato, a idade, a pretensão salarial, o sexo (M ou
F) e o cargo pretendido conforme código da tabela abaixo:

tabela: https://prnt.sc/FFqXOE4HxVrj
Para encerrar a entrada de dados, digite zero para a idade ou pergunte se o usuário deseja continuar
a leitura.
O programa também deve calcular e mostrar:
a. O total de candidatos do sexo feminino e o percentual em relação ao total;
b. A idade média entre todos os candidatos;
c. O total de inscritos para cada cargo;
d. Quantos candidatos tiveram pretensão salarial acima da média estabelecida na tabela.
*/

main()
{
    int idade;
    float pretencaoSalarial;
    char sexo;
    int cargo;
    char continuar;
    float somaIdade=0;
    int quantFeminino =0;
    int quantTotal=0;
    int quant1=0, quant2=0, quant3=0, quant4=0;
    int quant1Media=0, quant2Media=0, quant3Media=0, quant4Media=0;
    do{
        cout << "Informe a idaed: \n";
        cin >> idade;
        cout << "Informe a pretencao salarial: \n";
        cin >> pretencaoSalarial;
        fflush(stdin);
        cout << "Informe o sexo\n M - Masculino \n F - Feminino\n";
        cin >> sexo;
        cout << "Informe o cargo pretendido \n 1 - Coordenador de TI \n 2 - Administrador de Rede \n 3 - Suporte tecnico \n 4 - Analista de suporte tecnico \n";
        cin >> cargo;
        fflush(stdin);
        cout << "Deseja continuar? ";
        cin >> continuar;
        quantTotal++;
        if(continuar == 'N' || continuar == 'n');
            break;

        if(sexo == 'F' || sexo == 'f')
            quantFeminino++;

        somaIdade+=idade;


        switch(cargo){
            case 1:
                quant1++;
                if(pretencaoSalarial>10954){
                    quant1Media++;
                }
                break;
            case 2:
                quant2++;
                if(pretencaoSalarial>7087){
                    quant2Media++;
                }
                break;
            case 3:
                quant3++;
                if(pretencaoSalarial>8981){
                    quant3Media++;
                }
                break;
            case 4:
                quant4++;
                if(pretencaoSalarial>4564){
                    quant4Media++;
                }
        }
    }while(idade != 0);

    cout << "Percentual feminino" << (quantFeminino/quantTotal)*100 << "%";
    cout << "Media idade: " << ((somaIdade/quantTotal) * 100) << "%";
    cout << "Total inscritos: \n 1 - " << quant1;
    cout << "2 - " << quant2 << endl;
    cout << "3 - " << quant3 << endl;
    cout << "4 - " << quant4 << endl;
    cout << "Quantidade de candidatos pretencao acima da media " << (quant1Media + quant2Media + quant3Media + quant4Media);

}
