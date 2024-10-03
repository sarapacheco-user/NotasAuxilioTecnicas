#include <string>
#include <bitset>
#include <algorithm>
#include <iostream>
#include <cmath>

bool ehPrimo(unsigned long long int numB1){
    if (numB1<=1) {
        return false;
    }
    for (unsigned long long int i=2;i<=sqrt(numB1);i++){
        if(numB1 % i == 0) {

        return false;
        }
    }

    return true;
}
std::string intParaBinario(unsigned long long int X){
    const unsigned long long int width = 64;
    std::string binario(width, '0');
    unsigned long long int indice = width - 1;
    while(X > 0 && indice >= 0){
        binario[indice--] = (X % 2) ? '1' : '0';
        X /= 2;
     }
     return binario;
}

unsigned long long int contaOs1B(std::string binario){
    unsigned long long int numB1 = 0;
    unsigned long long int indice = 0;
    for(indice = 0;indice < 64; indice++){
        if(binario[indice]=='1'){
            numB1++;
        }
    }
    return numB1;
}
int main()
{
    unsigned long long int  N;
    std::cin >> N;
    while(N--){
        unsigned long long int  X;
        std::cin >> X;
        std::string binario = intParaBinario(X);
        // std::reverse(binario.begin(), binario.end());
        unsigned long long int num1B = contaOs1B(binario);
        if(ehPrimo(num1B)){
            std::cout << X << " eh um pribit" << std::endl;
        }else{
            std::cout << X << " nao eh um pribit" << std::endl;
        };
    }

    return 0;
}
