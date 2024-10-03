#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    ios::sync_with_stdio(false); // teste
    cin.tie(nullptr);
// socorro vai pf
    int linha, coluna, consulta;
    
    cin >> linha >> coluna >> consulta;
 
    unordered_map<int, pair<int, int>> posicoes;
 
    for (int i = 0; i < linha; i++) {
        
        for (int j = 0; j < coluna; j++) {
            int num;
            
            cin >> num;
            
            // armazena a primeira vez
            if (posicoes.find(num) == posicoes.end())
                posicoes[num] = {i, j};
        }
    }
 
    while (consulta--) {
        int num;
        cin >> num;
        if (posicoes.count(num))
         cout << posicoes[num].first << " " << posicoes[num].second << "\n";
        else
            cout << "-1 -1\n";
    }
 
    return 0;
}
