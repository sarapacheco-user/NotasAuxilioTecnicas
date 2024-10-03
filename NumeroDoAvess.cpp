#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdlib>
#include <bitset>

unsigned int reverteOsBit(unsigned long long int a) {
    std::bitset<64> bitset(a);
    std::string StringBinario = bitset.to_string();
    std::reverse(StringBinario.begin(), StringBinario.end());
    std::bitset<32> revertidoBitset(StringBinario);
    return revertidoBitset.to_ulong();
}

int main()
{
		unsigned long long int a;
		std::cin >> a ;
        unsigned long long int final = reverteOsBit(a);
        std::cout << final << std::endl;
	
	return 0;
}
