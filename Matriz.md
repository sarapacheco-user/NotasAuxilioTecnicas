# Matriz
Declaração e Inicialização
cpp
Copiar código
#include <iostream>

int main() {
    // Declarando uma matriz 3x3
    int matriz[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    // Acessando elementos
    std::cout << "Elemento na posição (1, 1): " << matriz[1][1] << std::endl; // Saída: 5

    return 0;
}
2. Usando std::vector
Declaração e Inicialização
cpp
Copiar código
#include <iostream>
#include <vector>

int main() {
    // Declarando uma matriz 3x3 usando vector
    std::vector<std::vector<int>> matriz(3, std::vector<int>(3));

    // Inicializando a matriz
    matriz[0][0] = 1; matriz[0][1] = 2; matriz[0][2] = 3;
    matriz[1][0] = 4; matriz[1][1] = 5; matriz[1][2] = 6;
    matriz[2][0] = 7; matriz[2][1] = 8; matriz[2][2] = 9;

    // Acessando elementos
    std::cout << "Elemento na posição (1, 1): " << matriz[1][1] << std::endl; // Saída: 5

    return 0;
}
3. Principais Operações com Matrizes
Aqui estão algumas operações comuns que você pode realizar com matrizes:

a. Exibir a Matriz
cpp
Copiar código
void exibirMatriz(const std::vector<std::vector<int>>& matriz) {
    for (const auto& linha : matriz) {
        for (int elemento : linha) {
            std::cout << elemento << " ";
        }
        std::cout << std::endl;
    }
}
b. Transpor a Matriz
cpp
Copiar código
std::vector<std::vector<int>> transporMatriz(const std::vector<std::vector<int>>& matriz) {
    int linhas = matriz.size();
    int colunas = matriz[0].size();
    std::vector<std::vector<int>> transposta(colunas, std::vector<int>(linhas));

    for (int i = 0; i < linhas; ++i) {
        for (int j = 0; j < colunas; ++j) {
            transposta[j][i] = matriz[i][j];
        }
    }

    return transposta;
}
c. Somar Duas Matrizes
cpp
Copiar código
std::vector<std::vector<int>> somarMatrizes(const std::vector<std::vector<int>>& matriz1, const std::vector<std::vector<int>>& matriz2) {
    int linhas = matriz1.size();
    int colunas = matriz1[0].size();
    std::vector<std::vector<int>> resultado(linhas, std::vector<int>(colunas));

    for (int i = 0; i < linhas; ++i) {
        for (int j = 0; j < colunas; ++j) {
            resultado[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }

    return resultado;
}
d. Multiplicar Duas Matrizes
cpp
Copiar código
std::vector<std::vector<int>> multiplicarMatrizes(const std::vector<std::vector<int>>& matriz1, const std::vector<std::vector<int>>& matriz2) {
    int linhas = matriz1.size();
    int colunas = matriz2[0].size();
    std::vector<std::vector<int>> resultado(linhas, std::vector<int>(colunas, 0));

    for (int i = 0; i < linhas; ++i) {
        for (int j = 0; j < colunas; ++j) {
            for (int k = 0; k < matriz1[0].size(); ++k) {
                resultado[i][j] += matriz1[i][k] * matriz2[k][j];
            }
        }
    }

    return resultado;
}
4. Exemplo Completo
Aqui está um exemplo completo que inclui a criação de uma matriz, a exibição, a transposição e a soma de duas matrizes.

cpp
Copiar código
#include <iostream>
#include <vector>

void exibirMatriz(const std::vector<std::vector<int>>& matriz) {
    for (const auto& linha : matriz) {
        for (int elemento : linha) {
            std::cout << elemento << " ";
        }
        std::cout << std::endl;
    }
}

std::vector<std::vector<int>> transporMatriz(const std::vector<std::vector<int>>& matriz) {
    int linhas = matriz.size();
    int colunas = matriz[0].size();
    std::vector<std::vector<int>> transposta(colunas, std::vector<int>(linhas));

    for (int i = 0; i < linhas; ++i) {
        for (int j = 0; j < colunas; ++j) {
            transposta[j][i] = matriz[i][j];
        }
    }

    return transposta;
}

std::vector<std::vector<int>> somarMatrizes(const std::vector<std::vector<int>>& matriz1, const std::vector<std::vector<int>>& matriz2) {
    int linhas = matriz1.size();
    int colunas = matriz1[0].size();
    std::vector<std::vector<int>> resultado(linhas, std::vector<int>(colunas));

    for (int i = 0; i < linhas; ++i) {
        for (int j = 0; j < colunas; ++j) {
            resultado[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }

    return resultado;
}

int main() {
    std::vector<std::vector<int>> matriz1 = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    std::vector<std::vector<int>> matriz2 = {
        {9, 8, 7},
        {6, 5, 4},
        {3, 2, 1}
    };

    std::cout << "Matriz 1:" << std::endl;
    exibirMatriz(matriz1);

    std::cout << "Matriz 2:" << std::endl;
    exibirMatriz(matriz2);

    std::vector<std::vector<int>> soma = somarMatrizes(matriz1, matriz2);
    std::cout << "Soma das matrizes:" << std::endl;
    exibirMatriz(soma);

    std::vector<std::vector<int>> transposta = transporMatriz(matriz1);
    std::cout << "Transposta da matriz 1:" << std::endl;
    exibirMatriz(transposta);

    return 0;
}
Conclusão
Com essas informações, você pode criar e manipular matrizes em C++ usando arrays ou std::vector. As operações comuns incluem exibição, transposição e soma de matrizes. Se precisar de mais informações ou ajuda com algo específico, é só perguntar!
