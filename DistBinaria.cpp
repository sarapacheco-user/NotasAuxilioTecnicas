#include <string>
#include <algorithm>
#include <vector>
#include <cstdlib>
#include <iostream>


std::string intToBinary(unsigned long long int num) {
    const int width = 64; 

    std::string binary;
    while (num > 0) {
        binary.push_back((num % 2) ? '1' : '0');
        num /= 2;
    }
    std::reverse(binary.begin(), binary.end());

    if (binary.size() < static_cast<size_t>(width)) {
        binary.insert(binary.begin(), width - binary.size(), '0');
    } else if (binary.size() > static_cast<size_t>(width)) {
        
        binary = binary.substr(binary.size() - width);
    }

    return binary;
}


int menorTam(int tam1, int tam2) {
	return (tam1 < tam2) ? tam1 : tam2;
}

int maiorTam(int tam1, int tam2) {
	return (tam1 > tam2) ? tam1 : tam2;
}

int main() {
	unsigned long long int num;
	std::cin >> num;

	for (unsigned long long int i = 0; i < num; ++i) {
		unsigned long long int n1;
		unsigned long long int n2;
		unsigned long long int dif = 0;

		std::cin >> n1 >> n2;

		std::string binary1 = intToBinary(n1);
		std::string binary2 = intToBinary(n2);

		int tam1 = binary1.size();
		std::vector<int> vetor1(tam1);

		int tam2 = binary2.size();
		std::vector<int> vetor2(tam2);

		for (int j = 0; j < tam1; ++j) {
			vetor1[j] = binary1[j] - '0';
		}

		for (int j = 0; j < tam2; ++j) {
			vetor2[j] = binary2[j] - '0';
		}

		int oMenorTam = menorTam(tam1, tam2);

		int V1 = vetor1.size();
		int V2 = vetor2.size();
		;
		// cmparacao
		if (V1 == V2) {
			for (size_t k = 0; k < V1; ++k) {
				if (vetor1[k] != vetor2[k]) {
					++dif;
				}
			}
		} else if (V1 > V2) {
			dif = V1;
		} else {
			dif = V2;
		}


		std::cout << dif << std::endl;
	}
	return 0;
}
