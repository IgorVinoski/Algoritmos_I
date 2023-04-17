#include<iostream>

#include<cstdio>

#include<cstdlib>

using namespace std;


/*
1 – Em um campeonato de vôlei existem dois times e cada um possui seis jogadores. Faça um programa
que receba a idade, o peso e a altura de cada um dos jogadores, calcule e mostre:
-A quantidade de jogadores com idade inferior a 18 anos;
-A média das idades dos jogadores de cada time;
-A média das alturas de todos os jogadores do campeonato;
-A porcentagem de jogadores com mais de 80 kg entre todos os jogadores do campeonato.



*/
void getCadastroJogador();

    main()
    {

    int i =0;
    int idade;
    float peso;
    float altura;
    int qntdMenorIdade=0;
    float mediaIdade=0;
    float somaIdade=0;
    float somaAltura=0;
    float somaIdade2=0;
    int pesoAcimaOitenta = 0;
    int idade2=0;
    while(i<12){


            cout << "Informe o peso do jogador: ";
            cin >> peso;
            cout << "Informe a altura: ";
            cin >> altura;
            somaAltura +=altura;
            cout << "Informe a idade: ";
            if(i<6){
            cin >> idade;
            somaIdade+=idade;
            }else{
                cin >> idade2;
                somaIdade2+=idade2;
            }



            if(idade<18){
                qntdMenorIdade++;
            }


            if(peso>80){
                pesoAcimaOitenta++;
            }
            i++;


            }
            cout << "A quantidade de jogador com idade menor que 18 anos e de: " << qntdMenorIdade << endl;
            cout << "A media de idade do time 1 e de: " << (somaIdade/6) << endl;
            cout << "A media de idade do time 2 e de: " << (somaIdade2/6) << endl;
            cout << "A media de altura do campeonato e de: " << (somaAltura/12) << endl;
            cout << "A porcentagem de jogadores com mais de 80kg e de: " << ((pesoAcimaOitenta/12) * 100) << "%" << endl;

        }



