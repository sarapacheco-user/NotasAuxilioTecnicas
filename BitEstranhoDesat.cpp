#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdlib>
#include <bitset>

unsigned long long int toInteger(const std::string& binaryString) {
    std::bitset<64> bitset(binaryString);
    return bitset.to_ullong(); 
}
std::string toBinary(unsigned long long int numInt) {
    std::bitset<64> bitset(numInt);
    std::string StringBinario = bitset.to_string();
    return StringBinario;
}

int main()
{
	unsigned long long int t,pos;
	std::cin >> t >> pos;
	while(t--) {
	    // pega o número e o transforma o em uma string binaria
	    
		unsigned long long int num;
		std::cin >> num;
		std::string stringFinal = toBinary(num);
		std::reverse(stringFinal.begin(),stringFinal.end());
		stringFinal[pos] = '0';
		std::reverse(stringFinal.begin(),stringFinal.end());
		unsigned long long int numFinal = toInteger(stringFinal);
        // pega as strings em biinario e as transforma em vector
        std::cout << numFinal << std::endl;
	    }
	
	return 0;
}
