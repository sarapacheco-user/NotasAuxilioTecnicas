// Busca Sequencial
// A busca sequencial (ou busca linear) é um algoritmo simples que percorre uma lista ou vetor, verificando cada elemento até encontrar o valor desejado ou chegar ao final da lista.

// Algoritmo de Busca Sequencial
// Percorra todos os elementos da lista.
// Compare cada elemento com o valor procurado.
// Se encontrar, retorne o índice; caso contrário, retorne um indicador de que não foi encontrado.
// Implementação em C++
// cpp
// Copiar código
// #include <iostream>
// #include <vector>

int buscaSequencial(const std::vector<int>& vetor, int valor) {
    for (size_t i = 0; i < vetor.size(); ++i) {
        if (vetor[i] == valor) {
            return i; // Retorna o índice do valor encontrado
        }
    }
    return -1; // Retorna -1 se não encontrado
}

int main() {
    std::vector<int> numeros = {10, 20, 30, 40, 50};
    int valor = 30;

    int resultado = buscaSequencial(numeros, valor);
    if (resultado != -1) {
        std::cout << "Valor encontrado no índice: " << resultado << std::endl;
    } else {
        std::cout << "Valor não encontrado." << std::endl;
    }

    return 0;
}
