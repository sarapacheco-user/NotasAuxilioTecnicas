unções e Métodos Principais de std::queue
std::queue::push(const T& value):

Adiciona um elemento ao final da fila.
cpp
Copiar código
myQueue.push(10);
std::queue::pop():

Remove o elemento do início da fila.
cpp
Copiar código
myQueue.pop();
std::queue::front():

Retorna uma referência ao elemento no início da fila.
cpp
Copiar código
int frontElement = myQueue.front();
std::queue::back():

Retorna uma referência ao elemento no final da fila.
cpp
Copiar código
int backElement = myQueue.back();
std::queue::empty():

Verifica se a fila está vazia.
cpp
Copiar código
bool isEmpty = myQueue.empty();
std::queue::size():

Retorna o número de elementos na fila.
cpp
Copiar código
size_t size = myQueue.size();
std::queue::swap(std::queue& other):

Troca o conteúdo de duas filas.
cpp
Copiar código
myQueue.swap(otherQueue);
std::queue::emplace() (disponível a partir do C++11):

Constrói um elemento no final da fila.
cpp
Copiar código
myQueue.emplace(20);
std::queue::push() com move semantics:

Adiciona um elemento ao final usando move semantics (C++11 ou posterior).
cpp
Copiar código
myQueue.push(std::move(myValue));
std::queue::operator=:

Atribui uma fila a outra.
cpp
Copiar código
myQueue = otherQueue;
std::queue::operator==:

Compara duas filas para igualdade.
cpp
Copiar código
if (myQueue == otherQueue) { /* ... */ }
std::queue::operator!=:

Compara duas filas para desigualdade.
cpp
Copiar código
if (myQueue != otherQueue) { /* ... */ }
std::queue::operator<:

Compara duas filas (menor).
cpp
Copiar código
if (myQueue < otherQueue) { /* ... */ }
std::queue::operator<=:

Compara duas filas (menor ou igual).
cpp
Copiar código
if (myQueue <= otherQueue) { /* ... */ }
std::queue::operator>:

Compara duas filas (maior).
cpp
Copiar código
if (myQueue > otherQueue) { /* ... */ }
std::queue::operator>=:

Compara duas filas (maior ou igual).
cpp
Copiar código
if (myQueue >= otherQueue) { /* ... */ }
std::queue::c:

Retorna a referência ao contêiner subjacente (normalmente um std::deque ou std::list).
std::queue::size_type:

Tipo de dado para armazenar o tamanho da fila (definido como size_t).
std::queue::value_type:

Tipo de dado dos elementos armazenados na fila.
std::queue::container_type:

Tipo do contêiner subjacente.
std::queue::get_allocator():

Retorna o alocador usado pelo contêiner subjacente.
std::queue::pop() com checagem de tamanho:

Garante que não está tentando remover de uma fila vazia (você pode adicionar lógica adicional).
std::queue::front() com checagem de tamanho:

Garante que não está acessando o início de uma fila vazia.
std::queue::back() com checagem de tamanho:

Garante que não está acessando o final de uma fila vazia.
std::queue::clear() (não existe, mas pode ser implementado chamando pop() em um loop até a fila estar vazia).

std::queue::iterator (não é parte da interface, mas pode ser obtido através do contêiner subjacente).

std::queue::const_iterator (semelhante ao iterator, obtido através do contêiner subjacente).

std::queue::begin() (usando o contêiner subjacente, não é um método direto).

std::queue::end() (usando o contêiner subjacente, não é um método direto).

std::queue::rbegin() (para iteração reversa, usando o contêiner subjacente).

std::queue::rend() (para iteração reversa, usando o contêiner subjacente).

std::queue::operator[] (não existe, mas pode ser simulado usando front() e pop() para acessar elementos).

std::queue::assign() (não existe, mas pode ser feito através de um loop e push()).

std::queue::emplace() com parâmetros:

Permite passar argumentos para o construtor do elemento que será enfileirado.
std::queue::swap() em contexto de threads:

Garante a segurança em um ambiente de múltiplas threads (uso do mutex).
Resumo
Essas funções e métodos cobrem a maioria das operações que você pode precisar ao trabalhar com filas em C++. A std::queue fornece uma interface simples e eficiente para gerenciar dados de forma FIFO, permitindo a manipulação de elementos em uma ordem específica. Se precisar de mais detalhes ou exemplos sobre alguma função específica, sinta-se à vontade para perguntar!
