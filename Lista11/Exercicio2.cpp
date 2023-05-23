#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<ctime>

using namespace std;
/*
2 – Crie um programa que contenha um vetor v[5] de valores inteiros e possua um menu com
as seguintes opções:
● Opção 0: sair do programa;
● Opção 1: gerar (intervalo de 0 a 100) e mostrar vetor;
● Opção 2: calcular e mostrar a soma dos valores pares do vetor;
● Opção 3: calcular e mostrar o percentual de números ímpares do vetor;
● Opção 4: ler um valor inteiro x e trocar todos os elementos pares do vetor por x;
● Opção 5: inverter os valores do vetor, exemplo:
v[1,5,7,8,9] -> v[9,8,7,5,1]
Observação: As opções 2,3,4 e 5 só podem ser executadas se o vetor já tiver sido gerado
(mostrar uma mensagem de erro).
*/

main()
{
    int v[5];
    int aux;
    int opcao;
    bool vetorGerado = false;
    int somaPares=0;
    float somaImapres = 0.0;
    int x;
    float qtdImpares=0;
    do{
        cout << "Opcao 0: sair do programa;" << endl;
        cout << "Opcao 1: gerar e mostrar o vetor" << endl;
        cout << "Opcao 2: calcular e mostrar a soma dos valores pares do vetor;" << endl;
        cout << "Opcao 3: calcular e mostrar o percentual de numeros impares do vetor; "<<endl;
        cout << "Opcao 4: ler um valor inteiro x e trocar todos os elementos pares do vetor por x;"<<endl;
        cout << "Opcao 5: inverter os valores do vetor; "<<endl;
        cin >> opcao;
        //
            srand(time(NULL)); //inicializando o randômico

        switch(opcao){
            case 0:
                system("cls");
                cout << "Programa finalizado.";
                getchar();
                break;
            case 1:
                system("cls");
                cout << "-- GERANDO O VETOR ---" << endl;
                for(int i = 0 ; i<5; i++){
                    v[i] =  rand() % 101;
                    cout << v[i] << ", " << endl;
                }
                vetorGerado = true;
                break;
            case 2:
                if(vetorGerado){
                    for(int i = 0 ; i<5; i++){
                        if(v[i]%2==0){
                            somaPares+=v[i];
                        }
                    }
                    cout << "A soma dos pares e: " << somaPares;
                    system("Pause");
                }else{
                    system("cls");
                    cout << "Para executar essa opcao inicialmente o vetor deve ser gerado! " << endl;
                }
                break;
            case 3:
                if(vetorGerado){
                    for(int i = 0;i<5;i++){
                        if(v[i]%2!=0){
                            qtdImpares = qtdImpares+1;
                        }
                    }
                    cout << "O percentual de numeros impares e: " << (float) qtdImpares/5 * 100.0 << "% " << endl;
                    system("Pause");
                }else{
                    system("cls");
                    cout << "Para executar essa opcao inicialmente o vetor deve ser gerado! " << endl;
                }
                break;
            case 4:
                if(vetorGerado){
                    cout << "Informe o valor X >>";
                    cin >> x;
                    for(int i = 0 ; i<5;i++){
                        if(v[i]%2==0){
                            v[i]= x;
                        }
                    }
                    cout << "O novo vetor agora e: " << endl;
                    for(int i = 0 ;i <5;i++){
                        cout << v[i] << ", ";
                    }
                    system("Pause");
                }else{
                    system("cls");
                    cout << "Para executar essa opcao inicialmente o vetor deve ser gerado! " << endl;
                }
                break;
            case 5:
                if(vetorGerado){
                    cout << "REORDENANDO O VETOR " <<endl;
                    for(int i = 0 ; i<4/2; i++){
                        aux = v[4-i];
                        v[4-i]=v[i];
                        v[i]=aux;
                    }
                    cout << "NOVO VETOR: " << endl;
                    for(int i = 0; i<5;i++){
                        cout << v[i] << ", ";
                    }
                    system("Pause");

                }else{
                    system("cls");
                    cout << "Para executar essa opcao inicialmente o vetor deve ser gerado! " << endl;
                }

                break;
            }
    }while(opcao !=0);
}
