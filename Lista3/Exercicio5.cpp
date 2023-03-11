#include<iostream>

#include<cstdio>

#include<cstdlib>

using namespace std;

/*
5 - Escreva um programa que leia as notas de um aluno em três disciplinas (matemática, física e
química), verificar se as notas são válidas, uma nota para ser considerada válida deve ter valor entre
0.0 e 10.0, caso alguma nota não for válida informar ao usuário e finalizar o programa, receba também
o percentual de frequência que pode ser entre 0.0 e 100.0 (validar a frequência também). Caso as três
notas e a frequência estejam no intervalo válido, calcule a média aritmética do aluno e determine se ele
foi aprovado ou reprovado (média >= 7 e frequência >= 75.0% é aprovado, caso contrário reprovado)
*/

main()
{
    float nota1, nota2, nota3, freq;


        cout << "Digite a nota de matemática: ";
        cin >> nota1;
        cout << "Digite a nota de física: ";
        cin >> nota2;
        cout << "Digite a nota de química: ";
        cin >> nota3;

        if((nota1>= 0.0 ||nota1 <= 10.0) && (nota2>= 0.0 ||nota2 <= 10.0)&& (nota3>= 0.0 ||nota3<= 10.0)){
            cout << "Digite o percentual de frequência: ";
            cin >> freq;

            if(freq<0.0 || freq >100.0){
                cout << "Frequência inválida. ";
            }

            float media = (nota1+nota2+nota3)/3.0;

            if(media >= 7 && freq >= 75){
                cout << "Aprovado!! ";
            }else {
                cout << "Reprovado. ";
            }


        }else {
            cout << "NOTAS INVÁLIDAS!";
        }

}
