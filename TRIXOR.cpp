# include <bitset>
#include <algorithm>
#include <iostream>
#include <cmath>
#include <vector>
#include <cstdlib>
#include <bits/stdc++.h>

// tavez nao precise se der tudo certo
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
		long long a,b,C,y;
		std::cin >> a >> b >> y;
		C = y ^(a^b);
		if (a^b^C == y){
		    std::cout << C << std:: endl;
		}else{
		    std::cout<< -1 << std:: endl;
		}
	}
	return 0;
}
