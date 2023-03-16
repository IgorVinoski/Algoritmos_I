#include<iostream>
#include<cstdio>
#include<cstdlib>

using namespace std;
/*
Em um país imaginário denominado Lisarb, todos os habitantes ficam felizes em pagar
seus impostos, pois sabem que os recursos arrecadados são utilizados em benefício da
população, sem qualquer desvio. A moeda deste país é o Rombus, cujo símbolo é o R$.
Faça um programa que leia um valor com duas casas decimais, equivalente ao salário de uma
pessoa de Lisarb. Em seguida, calcule e mostre o valor que esta pessoa deve pagar de Imposto
de Renda, segundo a tabela e o critério de cobrança do imposta apresentados abaixo:

Renda               Imposto de Renda

de 0.00 a R$ 2000.00 = Isento

de R$ 2000.01 até R$ 3000.00 = 8

de R$ 3000.01 até R$ 4500.00 = 18

acima de R$ 4500.00 = 28



*/

main()
{
    float salario;
    float valor_devido;

    cout << "Informe o seu salario ao LEAO: ";
    cin >> salario;

  if(salario <= 2000.0){
    cout << "Voce ta livre do leao amigo. ";
  } else{
      if(salario >= 2000.1 && salario <= 3000.0){
        valor_devido = salario*8/100;
        cout << "O valor devido é de: " << valor_devido << "\n O salario liquido e de: R$ " << salario-valor_devido;
    }else {
        if(salario > 3000.2 && salario <= 4500.0){
            valor_devido = salario*18/100;
            cout << "O valor devido é de: R$ " << valor_devido << "\n O salario liquido e de: R$ " << salario-valor_devido;
        }else {
             valor_devido = salario*28/100;
            cout << "O valor devido é de: R$ " << valor_devido << "\n O salario liquido e de: R$ " << salario-valor_devido;
        }
    }
}


}
