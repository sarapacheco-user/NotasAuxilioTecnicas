
#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdlib>
#include <bitset>

long long toInteger(const std::string& binaryString) {
    std::bitset<32> bitset(binaryString);
    return bitset.to_ullong(); 
}

std::string intToBinary(unsigned long long int num) {
	const int width = 32;

	std::string binario;
	while (num > 0) {
		binario.push_back((num % 2) ? '1' : '0');
		num /= 2;
	}
	std::reverse(binario.begin(), binario.end());

	if (binario.size() < static_cast<size_t>(width)) {
		binario.insert(binario.begin(), width - binario.size(), '0');
	} else if (binario.size() > static_cast<size_t>(width)) {

		binario = binario.substr(binario.size() - width);
	}

	return binario;
}

int main() {
	int N;
	int b;
	int num;
	int result;
	std::cin >> N >> b;
	while(N--) {
		std::cin >> num;
        std::string binario = intToBinary(num);
        std::reverse(binario.begin(),binario.end());
        binario[b] = '1';
        std::reverse(binario.begin(),binario.end());
        unsigned long long int result = toInteger(binario);
        std::cout << result << std::endl;
	}
	return 0;
}
