#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;
/*
4 – Faça um algoritmo que leia um vetor V[7] de números inteiros :
a) Na hora de ler cada valor do vetor verifique se este elemento já existe no
vetor V, obrigando que todos os elementos sejam diferentes, não pode existir
números iguais. b) Conte quantos números lidos no vetor são maiores que 60. c)
Crie um Vetor P com somente os valores pares do vetor V. d) Ordene de forma
decrescente o vetor P. e) Mostre o vetor P.
*/
int main() {
  int v[10];
  int qtdMaiorQue60=0;
  int qtdPares=0;
  int p[10];
  for (int i = 0; i < 10; i++) {
    bool repetido;
    do {
      v[i] = rand() % 45;
      repetido = false;
      for (int j = 0; j < i; j++) {
        if (v[i] == v[j]) {
          cout << "O valor " << v[i] << " ja existe, informe outro. ";
          repetido = true;
          break;
        }
      }
      if(v[i] < 60){
	      qtdMaiorQue60++;
      }
      if(v[i]%2==0){
	      p[qtdPares]=v[i];
        qtdPares++;
      }

    }while(repetido);
    cout << "\n";
    cout << v[i] << ", ";
  }
  bool troca;
  do{
    troca = false;
    for(int k = 0; k<qtdPares-1; k++){
      if(p[k]<p[k+1]){
        int aux = p[k];
        p[k] = p[k+1];
        p[k+1]=aux;
        troca = true;
        }
    }
  }while(troca);
  cout << "\n O vetor dos pares ordenados decrescentemente: " << endl;
  for(int i = 0; i<qtdPares; i++ ){
	  cout << p[i] << ", ";
  }
  cout << "\n";
}
