#include<iostream>

#include<cstdio>

#include<cstdlib>

using namespace std;

main(){
	/*1 – Escrever um algoritmo que gere um vetor X[10] e um vetor Y[10], ambos com valores no intervalo
	  de 1 a 15. Após mostrar os dois vetores na tela o programa deverá gerar um terceiro vetor com a
	  diferença entre X e Y, ou seja, todos os elementos de X que não existam em Y, sem repetição.
	  
	 
	 
	*/
	int x[10];
	int y[10];
	int cAux = -1;
	int aux[10];
	bool dif;
	for(int i = 0; i<10; i++){
		x[i] = rand() % 15 + 1;
		y[i] = rand() % 15 + 1;
	}
	cout << "Vetor X: ";
	for(int i = 0; i<10; i++){
		cout << x[i] << ", ";
	}
	cout << "\n";
	cout << "Vetor Y: ";
	for(int i = 0; i<10; i++){
		cout << y[i] << ", ";
	}
	cout << "\n";


	for(int i = 0; i<10; i++){
		for(int j = 0; j<10; j++){
			dif = false;
			if(x[i]==y[j]){
				break;		
			}else{
				dif = true;
			}
		}
		if(dif){
			cAux++;
			aux[cAux] = x[i];
		}
	}
	cout << cAux;
	
	cout << "O vetor da diferenca: ";
	for(int i = 0; cAux >= 0 && i<cAux; i++){
		cout << aux[i] << ",";
	}
	cout << "\n";
}
