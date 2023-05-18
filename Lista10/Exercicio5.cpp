#include<iostream>

#include<cstdio>
#include <iomanip>

#include<cstdlib>
#include<ctime>
using namespace std;
/*
5 - Escrever um programa que manipule um vetor vet[10] de números float, representando
as notas de 10 alunos de um turma de algoritmos 1. Após preencher o vetor com todas as
notas o programa deverá exibir:
- Maior e menor nota da turma
- Média da turma
- Percentual de alunos Aprovados (nota >= 6.0)
- Percentual de alunos Reprovados (nota < 6.0)
OBS: os resultados devem ser exibidos com 1 casa decimal
*/

main()
{
    float vet[10];
    float soma=0;
    float maior, menor;
    int aprovados=0;
    int reprovados=0;
    srand(time(NULL));
    for(int i = 0;i < 10;i++){
        vet[i] = ((rand() % 101)/10.0);
        cout << vet[i] << endl;
        soma += vet[i];
        if(i==0){
            maior = vet[0];
            menor = vet[0];
        }else if(vet[i]>maior){
            maior = vet[i];
        }else if(vet[i]<menor){
            menor = vet[i];
        }
        if(vet[i]>=6){
            aprovados++;
        }else{
            reprovados++;
        }
    }
    float percentualAprovados = (float) aprovados/10.0 * 100.0;
    float percentualReprovados = (float) reprovados/10.0 * 100.0;
    float mediaTruma = (float) soma/10.0;
    cout << fixed << setprecision(1);
    cout << "A maior nota: " << maior << endl;
    cout << "A menor nota: " << menor << endl;
    cout << "A media da turma: " << mediaTruma << endl;
    cout << "O percentual de aprovados: " << percentualAprovados << "%\n";
    cout << "O percentual de aprovados: " << percentualReprovados << "%\n";

}
