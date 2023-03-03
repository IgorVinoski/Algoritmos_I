#include<iostream>

#include<cstdio>

#include<cstdlib>

using namespace std;


main()
{
/*
Faça um programa que receba o preço de um produto, calcule e mostre o novo preço, sabendo-se
que este sofreu um desconto de 10 %.
*/

     float price;

     cout << "Enter product price : \n";
     cin >> price;

     cout << "The price after the discount: " << price*90/100;

}
