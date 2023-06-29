   #include <cstdio>
#include <cstdlib>
#include <iostream>

#define COLS 6
#define LINES 4

using namespace std;

void print(int matrix[LINES][COLS]);

int main() {

   int city[LINES][COLS];
   int option, total = 0, major, streetNS = 0, streetWE = 0, aux = 0;
   int vNS[COLS], vWE[LINES];

   for (int i = 0; i < LINES; i++) {
      for (int j = 0; j < COLS; j++) {
         city[i][j] = 0;
      }
   }

   do {

      int showOptions;
      int r1, r2;

      cout << endl << "0 - sair" << endl;
      cout << "1 - mostrar matriz de acidentes" << endl;
      cout << "2 - Indicar um acidente" << endl;
      cout << "3 - Mostrar estatisticas" << endl;
      cout << "Digite uma opcao: ";
      cin >> option;

      switch (option) {
         case 1:
            print(city);
            break;
         case 2:
            cout << endl << "Indique o numero da rua leste-oeste: ";
            cin >> r1;  // lines
            cout << endl << "Indique o numero da rua norte-sul: ";
            cin >> r2;  // cols

            city[r1][r2] = city[r1][r2] + 1;
            total++;

            cout << "acidente adicionado com sucesso!" << endl;

            break;
         case 3:
         default:
            cout << "Total de acidentes registrador: " << total << endl;

            major = city[0][0];

            cout << "Cruzamentos com maior números de acidentes: " << endl;
            for (int i = 0; i < LINES; i++)
               for (int j = 0; j < COLS; j++)
                  if (city[i][j] > major) major = city[i][j];

            for (int i = 0; i < LINES; i++)
               for (int j = 0; j < COLS; j++)
                  if (city[i][j] == major)
                     cout << " - rua leste-oeste: " << i
                          << " | rua norte-sul: " << j << endl;

            // inverte linhas e colunas
            for (int i = 0; i < COLS; i++) {
               for (int j = 0; j < LINES; j++) aux += city[j][i];

               vNS[i] = aux;

               aux = 0;
            }

            for (int i = 0; i < LINES; i++) {

               for (int j = 0; j < COLS; j++) aux += city[i][j];

               vWE[i] = aux;

               aux = 0;
            }

            major = 0;
            for (int i = 0; i < LINES; i++)
               if (major < vWE[i]) {
                  major = vWE[i];
                  streetWE = i;
               }

            major = 0;
            for (int i = 0; i < COLS; i++)
               if (major < vNS[i]) {
                  major = vNS[i];
                  streetNS = i;
               }

            cout << "Rua norte sul com maior número de acidentes: " << streetNS
                 << endl;
            cout << "Rua leste oeste com maior número de acidentes: "
                 << streetWE << endl;
            break;
      }

   } while (option != 0);

   return 0;
}

void print(int matrix[LINES][COLS]) {
   cout << endl;
   for (int i = 0; i < LINES; i++) {
      for (int j = 0; j < COLS; j++) {
         cout << matrix[i][j] << " ";
      }
      cout << endl;
   }
}
