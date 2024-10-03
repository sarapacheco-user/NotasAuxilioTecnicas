#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
#include <algorithm>
 
using namespace std;
 
class Jogador {
    
    
public:
	string nick;
	int minutos;
	int segundos;
 
	Jogador(const string& n, const string& tempo) : nick(n) {
		sscanf(tempo.c_str(), "%d:%d", &minutos, &segundos);
	}
 
	void exibir() const {
		cout
		        << setfill('0') << setw(2) << minutos << ":"
		        << setfill('0') << setw(2) << segundos << " - "<< nick << endl;
	}
	int tempoTotalEmSegundos() const {
		return minutos * 60 + segundos;
	}
};
 
int main() {
    
	int n_jogadores;
	cin >> n_jogadores;
 
	vector<Jogador> lista_jogadores;
 
	for (int i = 0; i < n_jogadores; i++) {
		string nick;
		string tempo;
		cin >> nick >> tempo;
 
		lista_jogadores.emplace_back(nick, tempo);
	}
    sort(lista_jogadores.begin(), lista_jogadores.end(), [](const Jogador& a, const Jogador& b) {
       
        if (a.tempoTotalEmSegundos() != b.tempoTotalEmSegundos()) {
            return a.tempoTotalEmSegundos() > b.tempoTotalEmSegundos(); //ordena em tempo
        }
        // se o tempo for o mesmo, compara em ordem açfabetoca
        return a.nick > b.nick; 
    });
// exibe um p um na formatação
	for (size_t i = 0; i < lista_jogadores.size(); i++) {
		cout << i + 1 << ". ";
		lista_jogadores[i].exibir();
 
	}
 
	return 0;
}
