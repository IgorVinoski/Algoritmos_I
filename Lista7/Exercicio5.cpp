#include<iostream>

#include<cstdio>

#include<cstdlib>

using namespace std;
/*
5 - A Federação Gaúcha de Futebol contratou você para escrever um programa para fazer uma estatística
do resultado de vários GRENAIS. Escreva um programa para ler o número de gols marcados pelo Inter
e pelo Grêmio em um GRENAL. Logo após escrever a mensagem "Novo grenal (S-sim N-nao)" e solicitar
uma resposta. Se a resposta for ‘S’, o algoritmo deve ser executado novamente solicitando o número
de gols marcados pelos times em uma nova partida, caso contrário deve ser encerrado mostrando:
● Quantos GRENAIS fizeram parte da estatística.
● O percentual de vitórias do Grêmio em relação ao total.
● O número de vitórias do Inter.
● O número de vitórias do Grêmio.
● O número de Empates.
● A média de gols por partida.
● Uma mensagem indicando qual o time que venceu o maior número de GRENAIS (ou
"Não houve vencedor", caso termine empatado).

*/

main()
{
    int numGolsInter;
    int numGolsGremio;
    char novo;
    int vitoriasInter =0 ;
    int vitoriasGremio =0;
    int empates=0;
    int somaGols=0;

    do{
        cout << "Informe o numero de gols marcados pelo Inter em Grenais: "<< endl;
        cin >> numGolsInter;

        cout << "Informe o numero de gols marcados pelo Gremio em Grenais " << endl;
        cin >> numGolsGremio;

        somaGols +=(numGolsInter + numGolsGremio);
        if(numGolsInter>numGolsGremio)
            vitoriasInter++;
        else if(numGolsGremio > numGolsInter)
            vitoriasGremio++;
        else
            empates++;
        cout << "Novo grenal: \n S - SIM \t N - NAO " << endl;
        cin >> novo;
    }while(novo=='s' || novo == 'S');

    cout << "O percentual de vitorias do Gremio: "<<  vitoriasGremio/(vitoriasInter+empates) << endl;
    cout << "Numero vitorias Inter: " << vitoriasInter << endl;
    cout << "Numero vitorias Gremio: " << vitoriasGremio << endl;
    cout << "Numero empates: " << empates << endl;
    cout << "Media de gols: " << (somaGols/(vitoriasInter+vitoriasGremio+empates)) << endl;


    if(vitoriasInter>vitoriasGremio && vitoriasInter > empates){
        cout << "O inter venceu mais grenais.";
    }else if(vitoriasInter<vitoriasGremio && vitoriasGremio > empates){
        cout << "O Gremio venceu mais grenais.";
    }else{
        cout << "Houveram mais empates;";
    }
}
