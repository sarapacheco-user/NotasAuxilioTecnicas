#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

int main() {
    
    unsigned long long int numCapitulos;
    unsigned long long int horasTotal;
    // pega os valores 
    cin >> numCapitulos >> horasTotal;

    vector<unsigned long long int> exerciciosVet(numCapitulos);
    for (int i = 0; i < numCapitulos ; i++) {
        cin >> exerciciosVet[i];
    }

    // preciso definir os limites da busca binária
    int esq = 1;
     int dir = *max_element(exerciciosVet.begin(), exerciciosVet.end());
    int resultado = dir;

    while (esq <= dir) {
        
        int meio = (dir + esq) / 2;
        
        int sessoesNecessarias = 0;

    for (int i = 0; i < numCapitulos; i++) {
            sessoesNecessarias +=  (exerciciosVet[i] + meio - 1) / meio;
        }

        if (sessoesNecessarias <= horasTotal) {
            resultado = meio;
            dir = meio - 1;
            
        } 
        else {
            esq = meio + 1;
        }
        //socorro
    }

    cout << resultado << endl;
    
    return 0;
}
