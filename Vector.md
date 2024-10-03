# Vector 
std:: vector<int> myVector;
Funções e Métodos para Manipulação de std::vector
std::vector::size(): Retorna o número de elementos no vetor.

cpp
Copiar código
size_t size = myVector.size();
std::vector::capacity(): Retorna a capacidade atual do vetor (quantidade de memória alocada).

cpp
Copiar código
size_t cap = myVector.capacity();
std::vector::empty(): Verifica se o vetor está vazio.

cpp
Copiar código
bool isEmpty = myVector.empty();
std::vector::push_back(): Adiciona um elemento ao final do vetor.

cpp
Copiar código
myVector.push_back(10);
std::vector::pop_back(): Remove o último elemento do vetor.

cpp
Copiar código
myVector.pop_back();
std::vector::insert(): Insere um ou mais elementos em uma posição específica.

cpp
Copiar código
myVector.insert(myVector.begin() + 1, 5); // Insere 5 na posição 1
std::vector::erase(): Remove um elemento ou uma faixa de elementos.

cpp
Copiar código
myVector.erase(myVector.begin() + 1); // Remove o elemento na posição 1
std::vector::clear(): Remove todos os elementos do vetor.

cpp
Copiar código
myVector.clear();
std::vector::front(): Retorna uma referência ao primeiro elemento do vetor.

cpp
Copiar código
int first = myVector.front();
std::vector::back(): Retorna uma referência ao último elemento do vetor.

cpp
Copiar código
int last = myVector.back();
std::vector::data(): Retorna um ponteiro para o array de dados subjacente.

cpp
Copiar código
int* array = myVector.data();
std::vector::reserve(): Reserva espaço para um número específico de elementos.

cpp
Copiar código
myVector.reserve(100);
std::vector::resize(): Redimensiona o vetor para conter um número específico de elementos.

cpp
Copiar código
myVector.resize(10);
std::vector::swap(): Troca o conteúdo de dois vetores.

cpp
Copiar código
std::vector<int> other;
myVector.swap(other);
std::vector::assign(): Atribui novos valores a todos os elementos do vetor.

cpp
Copiar código
myVector.assign(5, 10); // Preenche o vetor com 5 elementos iguais a 10
std::vector::find(): Encontra um elemento em um vetor (usando <algorithm>).

cpp
Copiar código
auto it = std::find(myVector.begin(), myVector.end(), 10);
std::vector::sort(): Ordena os elementos do vetor (usando <algorithm>).

cpp
Copiar código
std::sort(myVector.begin(), myVector.end());
std::vector::reverse(): Inverte os elementos do vetor (usando <algorithm>).

cpp
Copiar código
std::reverse(myVector.begin(), myVector.end());
std::vector::copy(): Copia os elementos de um vetor para outro (usando <algorithm>).

cpp
Copiar código
std::copy(myVector.begin(), myVector.end(), otherVector.begin());
std::vector::transform(): Aplica uma função a cada elemento do vetor (usando <algorithm>).

cpp
Copiar código
std::transform(myVector.begin(), myVector.end(), myVector.begin(), [](int x) { return x * 2; });
std::vector::count(): Conta o número de ocorrências de um elemento (usando <algorithm>).

cpp
Copiar código
int count = std::count(myVector.begin(), myVector.end(), 10);
std::vector::unique(): Remove elementos duplicados (usando <algorithm>).

cpp
Copiar código
auto it = std::unique(myVector.begin(), myVector.end());
std::vector::assign(): Atribui novos valores a todos os elementos do vetor.

cpp
Copiar código
myVector.assign(otherVector.begin(), otherVector.end());
std::vector::emplace_back(): Constrói um elemento no final do vetor (mais eficiente que push_back para objetos complexos).

cpp
Copiar código
myVector.emplace_back(20);
std::vector::emplace(): Insere um elemento em uma posição específica, construindo-o no local.

cpp
Copiar código
myVector.emplace(myVector.begin() + 1, 30);
std::vector::at(): Acessa um elemento com verificação de limites.

cpp
Copiar código
int value = myVector.at(1); // Lança uma exceção se o índice estiver fora dos limites
std::vector::begin(): Retorna um iterador para o início do vetor.

cpp
Copiar código
auto it = myVector.begin();
std::vector::end(): Retorna um iterador para o final do vetor.

cpp
Copiar código
auto it = myVector.end();
std::vector::assign(): Atribui novos valores a todos os elementos do vetor.

cpp
Copiar código
myVector.assign(3, 5); // Preenche o vetor com 3 elementos iguais a 5
std::vector::shrink_to_fit(): Reduz a capacidade do vetor para se ajustar ao seu tamanho.

cpp
Copiar código
myVector.shrink_to_fit();
std::vector::capacity(): Retorna a capacidade atual do vetor.

cpp
Copiar código
size_t cap = myVector.capacity();
std::vector::pop_back(): Remove o último elemento do vetor.

cpp
Copiar código
myVector.pop_back();
std::vector::insert(): Insere elementos em uma posição específica.

cpp
Copiar código
myVector.insert(myVector.begin(), 10); // Insere 10 na primeira posição
std::vector::erase(): Remove elementos de uma posição específica.

cpp
Copiar código
myVector.erase(myVector.begin()); // Remove o primeiro elemento
std::vector::transform(): Aplica uma função a cada elemento do vetor.

cpp
Copiar código
std::transform(myVector.begin(), myVector.end(), myVector.begin(), [](int x) { return x * 2; });

---------------------------------------------------------
Iterar sobre o vetor
 // Acessar elementos
    std::cout << "Primeiro elemento: " << myVector[0] << std::endl;
    std::cout << "Segundo elemento: " << myVector.at(1) << std::endl;

    // Iterar sobre o vetor
    for (const auto& element : myVector) {
        std::cout << "Elemento: " << element << std::endl;
    }
