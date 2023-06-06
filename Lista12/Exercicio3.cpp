#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
  cout << "Hello World!\n";
  int v[30];
  int qtd = 0;

  srand(time(0)); 

  cout << "\n";

  for (int i = 0; i < 30; i++) {
    bool isDuplicate;

    do {
      v[i] = rand() % 41;
      isDuplicate = false;
	qtd++;
      for (int j = 0; j < i; j++) {
        if (v[j] == v[i]) {
          isDuplicate = true;
	  qtd++;
          break;
        }
      }
    } while (isDuplicate);
    cout << v[i] << ",";
  }

  cout << "\n";

  cout << "\n";
  cout << "Quantidade: " << qtd<<endl;
}
