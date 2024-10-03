#include <algorithm>
#include <bitset>
#include <iostream>
#include <algorithm>
#include <string>


long long toInteger(const std::string& binario) {
    std::bitset<64> bitset(binario);
    return bitset.to_ullong(); 
}

std::string intToBinary(unsigned long long int num) {
    const int width = 64;
    std::string binario(width, '0'); // padroniza pra 64bits

    int index = width - 1;
    while (num > 0 && index >= 0) {
        binario[index--] = (num % 2) ? '1' : '0';
        num /= 2;
    }
    return binario;
}

int main() {
    unsigned long long int N;
    unsigned long long int  num;
    int pos1;
    int pos2;
    unsigned long long int result;
    char temp;
    std::cin >> N;
    while (N--) {
        std::cin >> num >> pos1 >> pos2;

        std::string binario = intToBinary(num);
        std::reverse(binario.begin(), binario.end());
        if (pos1 < 0 || pos1 >= 64 || pos2 < 0 || pos2 >= 64) {
            return 1; // sai com codigo de erro
        }
        std::swap(binario[pos1], binario[pos2]);

         std::reverse(binario.begin(), binario.end());

        result = toInteger(binario);

        std::cout << result << std::endl;

    }
    return 0;
}
