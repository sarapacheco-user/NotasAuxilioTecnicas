# Busca Binária
/* Busca Binária
A busca binária é um algoritmo mais eficiente que funciona em listas ou vetores ordenados. O algoritmo divide repetidamente o intervalo de busca pela metade até encontrar o valor desejado ou determinar que ele não está presente.

Algoritmo de Busca Binária
Defina dois ponteiros: esquerda e direita para os extremos da lista.
Enquanto esquerda for menor ou igual a direita:
Calcule o ponto médio.
Se o elemento no ponto médio for igual ao valor procurado, retorne o índice.
Se o valor for menor, mova o ponteiro direita para meio - 1.
Se o valor for maior, mova o ponteiro esquerda para meio + 1.
Se não encontrado, retorne um indicador de que não está presente. */

#include <iostream>
#include <vector>
#include <algorithm> // Para std::sort

int buscaBinaria(const std::vector<int>& vetor, int valor) {
    int esquerda = 0;
    int direita = vetor.size() - 1;

    while (esquerda <= direita) {
        int meio = esquerda + (direita - esquerda) / 2;

        if (vetor[meio] == valor) {
            return meio; // Retorna o índice do valor encontrado
        }
        if (vetor[meio] < valor) {
            esquerda = meio + 1; // Busca na metade direita
        } else {
            direita = meio - 1; // Busca na metade esquerda
        }
    }
    return -1; // Retorna -1 se não encontrado
}

int main() {
    std::vector<int> numeros = {10, 20, 30, 40, 50};
    int valor = 30;

    // Certifique-se de que a lista está ordenada
    std::sort(numeros.begin(), numeros.end());

    int resultado = buscaBinaria(numeros, valor);
    if (resultado != -1) {
        std::cout << "Valor encontrado no índice: " << resultado << std::endl;
    } else {
        std::cout << "Valor não encontrado." << std::endl;
    }

    return 0;
}
