# Pares
Em C++, um par é uma estrutura de dados que pode armazenar dois valores de diferentes tipos. A classe std::pair é fornecida na biblioteca padrão (<utility>) e é muito útil para armazenar e manipular pares de valores. Vamos ver como implementá-los e algumas funções úteis associadas.

1. Definição e Uso de std::pair
Declaração de um Par
cpp
Copiar código
#include <iostream>
#include <utility> // Para std::pair

int main() {
    std::pair<int, std::string> p1(1, "Alice");
    std::cout << "ID: " << p1.first << ", Nome: " << p1.second << std::endl;

    return 0;
}
2. Criando Pares
Você pode criar pares de diferentes tipos e acessá-los facilmente usando os membros first e second.

Exemplo de Criação de Pares
cpp
Copiar código
#include <iostream>
#include <utility>
#include <vector>

int main() {
    // Criando pares
    std::pair<int, std::string> p1(1, "Alice");
    std::pair<int, std::string> p2(2, "Bob");

    // Usando um vetor de pares
    std::vector<std::pair<int, std::string>> pessoas = {p1, p2};

    for (const auto& pessoa : pessoas) {
        std::cout << "ID: " << pessoa.first << ", Nome: " << pessoa.second << std::endl;
    }

    return 0;
}
3. Principais Funções e Operações com std::pair
Aqui estão 35 funções e operações úteis relacionadas ao uso de pares em C++:

std::make_pair: Cria um par de forma mais concisa.

cpp
Copiar código
auto p = std::make_pair(1, "Alice");
first e second: Acessa os elementos do par.

cpp
Copiar código
int id = p.first;
std::string nome = p.second;
Comparação de Pares: Usa operadores de comparação como ==, !=, <, >, <=, >=.

cpp
Copiar código
std::pair<int, std::string> p1(1, "Alice");
std::pair<int, std::string> p2(2, "Bob");
if (p1 < p2) { /*...*/ }
Armazenamento em Estruturas: Usar pares em vetores, listas, mapas, etc.

cpp
Copiar código
std::vector<std::pair<int, std::string>> vec;
vec.push_back(p1);
Ordenação: Pares podem ser ordenados automaticamente com std::sort.

cpp
Copiar código
std::sort(vec.begin(), vec.end());
Desempacotamento: Usar std::tie para desempacotar pares.

cpp
Copiar código
int id;
std::string nome;
std::tie(id, nome) = p;
Uso em Mapas: Usar std::pair como elementos em std::map.

cpp
Copiar código
std::map<int, std::string> mapa;
mapa.insert(p1);
std::pair com Tipos Complexos: Criar pares com tipos personalizados.

cpp
Copiar código
struct Pessoa { int id; std::string nome; };
std::pair<int, Pessoa> p3(1, Pessoa{1, "Alice"});
Retorno de Funções: Retornar pares de funções.

cpp
Copiar código
std::pair<int, int> soma(int a, int b) { return {a + b, a - b}; }
Conversão: Usar std::pair para converter entre tipos.

cpp
Copiar código
std::pair<double, double> coords = std::make_pair(1.5, 2.5);
Iteração: Iterar sobre vetores de pares.

cpp
Copiar código
for (const auto& p : vec) { /*...*/ }
std::get<N>: Acessar elementos usando índices.

cpp
Copiar código
auto a = std::get<0>(p);
Alocação Dinâmica: Usar pares com new.

cpp
Copiar código
auto* pDynamic = new std::pair<int, int>(1, 2);
Cópia: Copiar pares.

cpp
Copiar código
std::pair<int, std::string> pCopy = p1;
Múltiplos Pares: Usar pares como elementos de outros pares.

cpp
Copiar código
std::pair<int, std::pair<int, int>> nestedPair = {1, {2, 3}};
Soma e Média: Usar pares para operações matemáticas.

cpp
Copiar código
std::pair<double, double> somaMedias(const std::pair<double, double>& p1, const std::pair<double, double>& p2);
Construtores: Usar construtores para inicializar pares.

cpp
Copiar código
std::pair<int, std::string> p(1, "Alice");
std::array com Pares: Usar pares em std::array.

cpp
Copiar código
std::array<std::pair<int, std::string>, 2> arr = {p1, p2};
std::tuple vs std::pair: Comparar com std::tuple para mais de dois elementos.

cpp
Copiar código
std::tuple<int, std::string, double> t(1, "Alice", 3.14);
País e Capital: Usar pares para representar pares como país e capital.

cpp
Copiar código
std::pair<std::string, std::string> pais("Brasil", "Brasília");
Uso em Algoritmos: Usar pares em algoritmos que exigem comparação.

cpp
Copiar código
std::sort(vec.begin(), vec.end());
Funções Lambda: Usar pares em expressões lambda.

cpp
Copiar código
std::for_each(vec.begin(), vec.end(), [](const auto& p) { std::cout << p.first << " "; });
Mapeamento de Dados: Usar pares para mapear chaves e valores.

cpp
Copiar código
std::map<std::string, std::pair<int, double>> dados;
Funções de Comparação: Criar funções de comparação personalizadas para pares.

cpp
Copiar código
bool comparePairs(const std::pair<int, std::string>& p1, const std::pair<int, std::string>& p2);
Acesso a Múltiplos Valores: Usar std::pair para agrupar múltiplos valores.

cpp
Copiar código
std::pair<int, double> resultado = funcaoComplexa();
Comparação de Tipos: Comparar tipos de pares.

cpp
Copiar código
if (std::is_same<decltype(p1), decltype(p2)>::value) { /*...*/ }
Encadeamento: Usar pares para encadear operações.

cpp
Copiar código
auto resultado = f1(p1).f2(p2);
Conversão de String para Par: Converter strings em pares.

cpp
Copiar código
std::pair<int, std::string> p = parseString("1, Alice");
Pares em Grafos: Usar pares para representar arestas em grafos.

cpp
Copiar código
std::pair<int, int> aresta(1, 2);
Objetos com Pares: Usar pares em objetos.

cpp
Copiar código
struct Pessoa { std::pair<int, std::string> info; };
Integração com Estruturas de Dados: Usar pares em filas ou pilhas.

cpp
Copiar código
std::stack<std::pair<int, int>> pilha;
Dicionários: Usar pares para construir dicionários.

cpp
Copiar código
std::map<std::string, std::pair<int, double>> dicionario;
Uso em Estruturas de Controle: Usar pares em estruturas de controle.

cpp
Copiar código
for (const auto& [chave, valor] : dicionario) { /*...*/ }
Conversão entre Tipos: Conversão de tipos com pares.

cpp
Copiar código
std::pair<float, int> p = std::make_pair(1.0f, 2);
Estruturas de Dados Personalizadas: Criar estruturas de dados que usam pares como base.

cpp
Copiar código
struct Item { std::pair<int, int> dimensoes; };
