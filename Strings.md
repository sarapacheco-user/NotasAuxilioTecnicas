# String : Funções e Métodos
### Funções e Métodos para Manipulação de Strings

1.  **`std::string::length()`**: Retorna o comprimento da string.
    
    cpp
    
    Copiar código
    
    `size_t len = myString.length();` 
    
2.  **`std::string::size()`**: Retorna o tamanho da string (equivalente a `length()`).
    
    cpp
    
    Copiar código
    
    `size_t size = myString.size();` 
    
3.  **`std::string::empty()`**: Verifica se a string está vazia.
    
    cpp
    
    Copiar código
    
    `bool isEmpty = myString.empty();` 
    
4.  **`std::string::clear()`**: Limpa o conteúdo da string.
    
    cpp
    
    Copiar código
    
    `myString.clear();` 
    
5.  **`std::string::append()`**: Anexa uma string ao final da string existente.
    
    cpp
    
    Copiar código
    
    `myString.append(" World");` 
    
6.  **`std::string::insert()`**: Insere uma string em uma posição específica.
    
    cpp
    
    Copiar código
    
    `myString.insert(5, " Beautiful");` 
    
7.  **`std::string::erase()`**: Remove uma parte da string.
    
    cpp
    
    Copiar código
    
    `myString.erase(5, 10); // Remove 10 caracteres a partir da posição 5` 
    
8.  **`std::string::replace()`**: Substitui uma parte da string.
    
    cpp
    
    Copiar código
    
    `myString.replace(0, 5, "Hi");` 
    
9.  **`std::string::substr()`**: Retorna uma substring a partir de uma posição específica.
    
    cpp
    
    Copiar código
    
    `std::string sub = myString.substr(0, 5);` 
    
10.  **`std::string::find()`**: Localiza a posição de uma substring.
    
    cpp
    
    Copiar código
    
    `size_t pos = myString.find("Beautiful");` 
    
11.  **`std::string::rfind()`**: Localiza a última ocorrência de uma substring.
    
    cpp
    
    Copiar código
    
    `size_t pos = myString.rfind("o");` 
    
12.  **`std::string::compare()`**: Compara duas strings.
    
    cpp
    
    Copiar código
    
    `int result = myString.compare("Hello");` 
    
13.  **`std::string::c_str()`**: Retorna um ponteiro para um array de caracteres C.
    
    cpp
    
    Copiar código
    
    `const char* cStr = myString.c_str();` 
    
14.  **`std::string::data()`**: Retorna um ponteiro para os dados da string.
    
    cpp
    
    Copiar código
    
    `const char* data = myString.data();` 
    
15.  **`std::string::find_first_of()`**: Encontra a primeira ocorrência de qualquer caractere de um conjunto.
    
    cpp
    
    Copiar código
    
    `size_t pos = myString.find_first_of("aeiou");` 
    
16.  **`std::string::find_last_of()`**: Encontra a última ocorrência de qualquer caractere de um conjunto.
    
    cpp
    
    Copiar código
    
    `size_t pos = myString.find_last_of("aeiou");` 
    
17.  **`std::string::find_first_not_of()`**: Encontra a primeira posição que não corresponde a um conjunto de caracteres.
    
    cpp
    
    Copiar código
    
    `size_t pos = myString.find_first_not_of("aeiou");` 
    
18.  **`std::string::find_last_not_of()`**: Encontra a última posição que não corresponde a um conjunto de caracteres.
    
    cpp
    
    Copiar código
    
    `size_t pos = myString.find_last_not_of("aeiou");` 
    
19.  **`std::string::reverse()`**: Inverte a string (usando `std::reverse` da `<algorithm>`).
    
    cpp
    
    Copiar código
    
    `std::reverse(myString.begin(), myString.end());` 
    
20.  **`std::string::to_string()`**: Converte um número para string.
    
    cpp
    
    Copiar código
    
    `std::string strNum = std::to_string(123);` 
    
21.  **`std::string::stoi()`**: Converte uma string em um inteiro.
    
    cpp
    
    Copiar código
    
    `int num = std::stoi(myString);` 
    
22.  **`std::string::stof()`**: Converte uma string em um float.
    
    cpp
    
    Copiar código
    
    `float fNum = std::stof(myString);` 
    
23.  **`std::string::stod()`**: Converte uma string em um double.
    
    cpp
    
    Copiar código
    
    `double dNum = std::stod(myString);` 
    
24.  **`std::string::find_if()`**: Localiza o primeiro caractere que satisfaz uma condição (usando `<algorithm>`).
    
    cpp
    
    Copiar código
    
    `auto it = std::find_if(myString.begin(), myString.end(), [](char c) { return c == 'e'; });` 
    
25.  **`std::string::transform()`**: Aplica uma função a cada caractere da string (usando `<algorithm>`).
    
    cpp
    
    Copiar código
    
    `std::transform(myString.begin(), myString.end(), myString.begin(), ::toupper);` 
    
26.  **`std::string::resize()`**: Redimensiona a string para um novo tamanho.
    
    cpp
    
    Copiar código
    
    `myString.resize(10); // Aumenta ou diminui o tamanho` 
    
27.  **`std::string::swap()`**: Troca o conteúdo de duas strings.
    
    cpp
    
    Copiar código
    
    `std::string other = "Hello";
    myString.swap(other);` 
    
28.  **`std::string::begin()`**: Retorna um iterador para o início da string.
    
    cpp
    
    Copiar código
    
    `auto it = myString.begin();` 
    
29.  **`std::string::end()`**: Retorna um iterador para o final da string.
    
    cpp
    
    Copiar código
    
    `auto it = myString.end();` 
    
30.  **`std::string::capacity()`**: Retorna a capacidade atual da string (quantidade de memória alocada).
    
    cpp
    
    Copiar código
    
    `size_t cap = myString.capacity();`
    std::string::pop_back():

Remove o último caractere da string.
cpp
Copiar código
myString.pop_back(); // Remove o '!'
std::string::front():

Retorna o primeiro caractere da string.
cpp
Copiar código
char firstChar = myString.front(); // 'H'
std::string::back():

Retorna o último caractere da string.
cpp
Copiar código
char lastChar = myString.back(); // 'o'
std::string::reserve():

Reserva espaço para a string, aumentando sua capacidade sem alterar seu tamanho.
cpp
Copiar código
myString.reserve(100); // Reserva espaço para 100 caracteres
std::string::assign():

Atribui um novo valor à string.
cpp
Copiar código
myString.assign("New Value");
std::string::copy():

Copia uma parte da string para um array de caracteres.
cpp
Copiar código
char buffer[10];
myString.copy(buffer, 5, 0); // Copia os primeiros 5 caracteres
buffer[5] = '\0'; // Adiciona terminador nulo
std::string::find_first_not_of():

Encontra a posição do primeiro caractere que não está em um conjunto.
cpp
Copiar código
size_t pos = myString.find_first_not_of("Hello");
std::string::find_last_not_of():

Encontra a posição do último caractere que não está em um conjunto.
cpp
Copiar código
size_t pos = myString.find_last_not_of("Hello");
std::string::trim() (não é uma função padrão, mas pode ser implementada):

Remove espaços em branco do início e do fim da string.
std::string::to_lower() / to_upper() (usando std::transform):

Converte todos os caracteres para minúsculas ou maiúsculas.
cpp
Copiar código
std::transform(myString.begin(), myString.end(), myString.begin(), ::tolower);
## Lower e Upper Bounf 
lower_bound
Definição: lower_bound retorna um iterador para o primeiro elemento no intervalo que não é menor que (ou igual a) um valor específico. Em outras palavras, ele retorna o ponto onde você pode inserir o valor mantendo a ordem.

Sintaxe:

cpp
Copiar código
std::lower_bound(start, end, value);
Exemplo:

cpp
Copiar código
#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec = {1, 3, 5, 7, 9};
    int value = 5;

    auto it = std::lower_bound(vec.begin(), vec.end(), value);

    if (it != vec.end()) {
        std::cout << "O primeiro elemento não menor que " << value << " é: " << *it << std::endl;
    } else {
        std::cout << "Valor não encontrado, maior que todos os elementos." << std::endl;
    }
    return 0;
}
Saída: O primeiro elemento não menor que 5 é: 5
upper_bound
Definição: upper_bound retorna um iterador para o primeiro elemento que é maior que um valor específico. Isso é útil para determinar a posição onde você poderia inserir um novo valor sem violar a ordem.

Sintaxe:

cpp
Copiar código
std::upper_bound(start, end, value);
Exemplo:

cpp
Copiar código
#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec = {1, 3, 5, 7, 9};
    int value = 5;

    auto it = std::upper_bound(vec.begin(), vec.end(), value);

    if (it != vec.end()) {
        std::cout << "O primeiro elemento maior que " << value << " é: " << *it << std::endl;
    } else {
        std::cout << "Valor não encontrado, maior que todos os elementos." << std::endl;
    }
    return 0;
}
Saída: O primeiro elemento maior que 5 é: 7
Resumo
lower_bound:

Retorna um iterador para o primeiro elemento que não é menor que o valor.
Se todos os elementos são menores, retorna o iterador end.
upper_bound:

Retorna um iterador para o primeiro elemento que é maior que o valor.
Se todos os elementos são menores ou iguais, retorna o iterador end.
Considerações
Ambas as funções assumem que o intervalo está ordenado. Se não estiver, os resultados podem ser imprevisíveis.
A complexidade de tempo dessas funções é O(log n) devido à busca binária
