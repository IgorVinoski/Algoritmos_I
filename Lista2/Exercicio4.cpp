#include<iostream>

#include<cstdio>

#include<cstdlib>

using namespace std;
/*
Sabendo-se que 100 quilowatts de energia custa um sétimo do salário mínimo, fazer um algoritmo
que receba o valor do salário mínimo e a quantidade de quilowatts gasta por uma residência. calcule
e mostre:
● O valor em reais de cada quilowatt
● O valor em reais a ser pago
● O novo valor a ser pago por essa residência com um desconto de 10%.
*/

main()
{
float basic_salary;
float kilowhats;
float price_per_kilowhats;

cout << "Enter the amount of basic salary: ";
cin >> basic_salary;

cout << "Enter the amount of kilowhats consumed: ";
cin >> kilowhats;
price_per_kilowhats = basic_salary/700;
cout << "The value of 1 kwhat is: " <<price_per_kilowhats ;


cout << " The monthly expense is: " << price_per_kilowhats * kilowhats;

}
