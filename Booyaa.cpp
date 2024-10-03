#include <stdio.h>
#include <bits/stdc++.h>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	unsigned long long int n_seguidores, q_dias_fut, inscricoes_dia;
	cin >> n_seguidores >> q_dias_fut;
	vector <unsigned long long int> somaVet(30);
	unsigned long long int soma = 0;
	for(int i = 0; i < 30; i++) {
		cin >> somaVet[i];
		soma = soma + somaVet[i];
	}
	double media = (soma /30.0);
	unsigned long long int total = n_seguidores;
	for(unsigned long long int i = 0; i < q_dias_fut; i++) {
		total = total + ceil(media); // arredonda a mC)dia pra cima
		// o total parte a ser a soma da mC)dia arredondada com o numero de n_seguidores
		soma = soma - somaVet[i%30];
		// aqui C) a parte interressante
		// a media vai mudando pq a soma vai mudando
		// ent por ex::
		// 62 vai virar o dia 2, pois usa o operador de resto
		unsigned long long int novos_seguidores  = ceil(media);
		soma = soma + novos_seguidores;
		media = soma /30.0;
		// socorroooo
		somaVet[i % 30] = novos_seguidores;
		
	} // pf da certo ta acabando o tempoooo
	cout << total << endl;
	return 0;
}
