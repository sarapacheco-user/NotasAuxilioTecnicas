#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdlib>
#include <bitset>

long long toInteger(const std::string& binaryString) {
    std::bitset<64> bitset(binaryString);
    return bitset.to_ullong(); 
}
std::string toBinary(int numInt) {
	const int width = 64;
	std::string binaryString(width, '0');
	if (numInt==0) return binaryString;
	
	int indice = width - 1;
	while(numInt>0) {
		binaryString[indice--]=(numInt%2) ? '1' : '0';
		numInt = numInt / 2;
	}
    return binaryString;
}

int main()
{
	int t;
	std::cin >> t;
	while(t--) {
	    // pega o número e o transforma o em uma string binaria
	    
		int a,b,C,y;
		std::cin >> a >> b >> y;
		std::string stringA = toBinary(a);
		std::string stringB = toBinary(b);
		
		
		
		std::string stringY = toBinary(y);
        // pega as strings em biinario e as transforma em vector
        
        
        std::vector<int>vetorA(64);
        std::vector<int>vetorB(64);
        std::vector<int>vetorY(64);
        std::vector<int>vetorC(64);
        
         for(size_t j = 0; j < 64; ++j){
            vetorA[j] = stringA[j] - '0';
            vetorB[j] = stringB[j] - '0';
            vetorY[j] = stringY[j] - '0';
        }
        
         
        std::vector<int>vetorAouB(64);
        
        for(size_t m = 0; m < 64;++m ){
            vetorAouB[m] = vetorA[m] | vetorB[m];
        }
        
        bool invalido = false;
        for(size_t n = 0; n < 64;++n){
            if(vetorAouB[n]==1 && vetorY[n] == 0){
                std::cout << -1 << std::endl;
                invalido = true;
                break;
            }else {
                vetorC[n] = (vetorAouB[n] == 0 && vetorY[n]==1)? 1 : 0;
            }
        }
        
        if(!invalido){
            std::string stringC(64,'0');
            for(int o = 0; o < 64; ++o){
             stringC[o]=vetorC[o] + '0';
            }  
        
             
        
        long long C = toInteger(stringC);
        std::cout << C << std::endl;
	    }
	}
	return 0;
}
