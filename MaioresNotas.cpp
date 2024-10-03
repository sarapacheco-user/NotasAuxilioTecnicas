#include <stdio.h>
#include <bits/stdc++.h>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    unsigned long long int q_alunos, q_consultas, nota_corte;
    cin >> q_alunos >> q_consultas;
    vector <unsigned long long int> notas_acumuladas(q_alunos);
    for (size_t i = 0; i < notas_acumuladas.size() ; i++){
        cin >> notas_acumuladas[i];
    }
    for (size_t i = 0; i < q_consultas; i++){
        cin >> nota_corte;
        auto it = lower_bound(notas_acumuladas.begin(),notas_acumuladas.end(),nota_corte + 1);
        unsigned long long int contador = 0;
        contador = notas_acumuladas.end() - it;
        cout << contador <<" notas maiores que "<< nota_corte << endl;
    }
    return 0;
}
