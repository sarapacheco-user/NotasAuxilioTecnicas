
# Ferramentas Auxiliares
## CONVERSÃO ENTRE TIPOS
-----------------------------------------------------------------------
### Tipo Numérico para outro tipo numérico
* (Int/Float/Double) -> (Float/Int/Double)
   int num = 10;]
  float f = STATIC_CAST<float>(num)// int para float
### String para Tipo Numérico
STO(string to ) I = inteiro -> std::stoi(str)
STO(string to ) F = float -> std::stof(str)
STO(string to ) D = double -> std::stoi(str)
### Tipo Numérico para String
std::to_string(var_num);
### Char para Int
int num = STATIC_CAST<int>(c);
### Int para Char
-----------------------------------------------------------------------
## INTEIRO PARA BIT & BIT PARA INTEIRO
-----------------------------------------------------------------------
### INTEIRO PARA BIT 
#include <iostream>
#include <bitset>
void printBits(int num) {
    std::bitset<32> bits(num); // Representa o número em 32 bits, mas tbm pode fazer com 64
    std::cout << bits << std::endl;
}
### BIT PARA INTEIRO
#include <iostream>
#include <string>

int main() {
    std::string binaryString = "1010"; // Representação binária de 10
    int number = std::stoi(binaryString, nullptr, 2); // Base 2 para binário

    std::cout << "O número inteiro é: " << number << std::endl; // Saída: 10
    return 0;
}
------------------------------------------------------------------------
## OPERAÇÕES BIT A BIT
#include <iostream> int main() { int a = 5; // Binário: 0101 int b = 3; // Binário: 0011 
std::cout << "AND: " << (a & b) << std::endl; // 1 (0001) std::cout << "OR: " << (a | b) << std::endl; // 7 (0111) std::cout << "XOR: " << (a ^ b) << std::endl; // 6 (0110) std::cout << "NOT: " << (~a) << std::endl; // -6 (inverte todos os bits) std::cout << "Shift Left: " << (a << 1) << std::endl; // 10 (1010) std::cout << "Shift Right: " << (a >> 1) << std::endl; // 2 (0010) return 0; }

------------------------------------------------------------------------
## CARACTERE PARA ASCII e ASCII PARA CARACTERE 
* Caractere para ASCII
char c = 'A';
 int asciiValue = static_cast<int>(c); // Converte 'A' para 65 std::cout << "Valor ASCII de " << c << " é " << asciiValue << std::endl;
*  ASCII para caractere
* #include <iostream>

int main() {
    int asciiValue = 65; // Valor ASCII de 'A'
    char character = static_cast<char>(asciiValue); // Converte o valor ASCII para caractere

    std::cout << "O caractere correspondente ao valor ASCII " << asciiValue << " é: " << character << std::endl; // Saída: A
    return 0;
}
// CONVERSAO DE VARIOS PARA ASCII
#include <iostream>

int main() {
    int asciiValues[] = {65, 66, 67, 68}; // Valores ASCII de 'A', 'B', 'C', 'D'

    for (int value : asciiValues) {
        char character = static_cast<char>(value);
        std::cout << "O caractere correspondente ao valor ASCII " << value << " é: " << character << std::endl;
    }

    return 0;
}
-----------------------------------------------------
## PASSAGEM POR REFERENCIA EM C++

**O que são referências?**

-   Uma referência em C++ é um "apelido" para outra variável. Ao usar uma referência, você pode acessar e modificar a variável original sem precisar usar ponteiros ou copiar os valores.

**Declaração de Referência:**

-   Para declarar uma referência, use o operador `&` na declaração da variável.

### Como Usar Referências

1.  **Declaração de uma Referência**:
    
    cpp
    
    Copiar código
    
    `int original = 42;
    int& ref = original; // ref é uma referência a original` 
    
2.  **Modificando a Variável Original**:
    
    -   Qualquer alteração feita na referência afeta a variável original.
    
    cpp
    
    Copiar código
    
    `ref = 100; // Modifica original
    std::cout << original; // Saída: 100` 
    
3.  **Usando Referências em Funções**:
    
    -   Passar variáveis por referência para funções permite modificar a variável original sem fazer cópias.
    
    cpp
    
    Copiar código
    
    `void increment(int& value) {
        value++; // Incrementa a variável original
    }
    
    int main() {
        int num = 10;
        increment(num); // num será 11
        std::cout << num; // Saída: 11
        return 0;
    }` 
    
4.  **Referências Constantes**:
    
    -   Você pode ter referências que não podem ser modificadas usando `const`.
    
    cpp
    
    Copiar código
    
    `const int& constRef = original; // Não pode modificar original através de constRef` 
    

### Vantagens das Referências

-   **Simplicidade**: Referências são mais simples de usar que ponteiros, pois não precisam de desreferenciação (não é necessário usar `*`).
-   **Sem Cópia**: Passar grandes estruturas ou classes por referência é mais eficiente, pois evita a cópia dos dados.
-   **Segurança**: Referências não podem ser nulas, o que evita problemas comuns associados ao uso de ponteiros.

### Resumo

-   **Declaração**: `int& ref = original;` cria uma referência.
-   **Modificação**: Alterações na referência afetam a variável original.
-   **Funções**: Usar referências em funções permite modificar a variável passada como argumento.
-   **Constantes**: `const int&` impede alterações na variável original.

Se precisar de mais detalhes ou exemplos sobre referências, sinta-se à vontade para perguntar!
