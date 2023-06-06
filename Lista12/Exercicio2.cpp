#include<iostream>

#include<cstdio>

#include<cstdlib>

using namespace std;


/*
2 – Escreva um algoritmo que preencha um vetor A com dez números inteiros entre 1 e 50, a seguir
gere dois vetores: X contendo os valores do vetor A menores que 26 e outro vetor Y com os números
de A acima de 25. Os 3 vetores devem ser exibidos na tela de forma ordenada em ordem crescente.
Caso algum vetor não tiver nenhum valor deverá exibir uma mensagem com esta informação.
*/

main(){
	int a[10];
	int x[10];
	int y[10];
	int qtdMenorQue26 = -1;
	int qtdMaiorQue25 = -1;
	for(int i = 0;i<10; i++){
		a[i]= rand() % 50 + 1;
	}

	for(int i = 0 ;i<10; i++){
		if(a[i]<26){
			qtdMenorQue26++;
			x[qtdMenorQue26]=a[i];
			
		}
	}

	for(int i = 0; i<10; i++){
		if(a[i]>25){
			qtdMaiorQue25++;
			y[qtdMaiorQue25] = a[i];
		}
	}

	cout << "O vetor original: " << endl;
	for(int i = 0; i<10; i++){
		cout << a[i] << ", ";
	}
	cout << "\nO vetor com a quantidade menor que 26: ";
	for(int i = 0; i<qtdMenorQue26 && qtdMenorQue26>=0; i++){
		cout << x[i] << ", " << endl;
	}
	cout << "\nO vetor com a quantidade maior que 25: ";
	for(int i = 0; i<qtdMaiorQue25 && qtdMaiorQue25>=0; i++){
		cout << y[i] << ", " << endl;
	}
	cout << "\nOrdenando os vetores em ordem crescente." << endl;

	


	//selection sort
	for(int i = 0; i<qtdMenorQue26 - 1; i++){
		int min = i;
		int j, aux;
		for(j = i + 1; j < qtdMenorQue26; j++){
			if(x[j] < x[min]) min = j;
		}
		aux = x[i]; x[i] = x[min]; x[min] = aux;
		
	}
	//Insertion sort
	for(int i = 1; i<qtdMaiorQue25; i++){
		int aux = y[i];
		int j;
		for(j = i-1; j >= 0 && y[j] > aux; j--){
			y[j+1] = y[j]; 
		}
		y[j+1] = aux;

	}


	cout << "O X:" << endl;
	for(int i = 0; i<qtdMenorQue26; i++){
		cout << x[i] << ",";
	}
	
	cout << "\n";
	cout << "O Y:" << endl;
	for(int i = 0; i<qtdMaiorQue25; i++){
		cout << y[i] << ",";
	}
}
