#include<iostream>

#include<cstdio>

#include<cstdlib>

using namespace std;

/*
Escreva um algoritmo para ler o número total de eleitores de um município, o número de votos
brancos, nulos e válidos. Calcular e escrever o percentual que cada um representa em relação ao
total de eleitores.

*/
main()
{
int number_voters, blank_votes, null_votes, valid_votes;

cout << "Enter the number of voters: ";
cin >> number_voters;

cout << "Enter the number of blank votes: ";
cin >> blank_votes;

cout << "Enter the number of null votes: ";
cin >> null_votes;

cout << "Enter the number of valid votes: ";
cin >> valid_votes;


cout << "The percentage of null votes is: " <<  ( (float) null_votes/number_voters)*100  << "%\nThe percentage of blank votes: " <<  ( (float) blank_votes/number_voters)*100 << "%\nThe percentage of valid votes: " << (  (float)valid_votes/number_voters)*100 << "%";


}
