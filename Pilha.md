# Pilha/Stack
Funções e Métodos Principais de std::stack
std::stack::push(const T& value):

Adiciona um elemento ao topo da pilha.
cpp
Copiar código
myStack.push(10);
std::stack::pop():

Remove o elemento do topo da pilha.
cpp
Copiar código
myStack.pop();
std::stack::top():

Retorna uma referência ao elemento do topo da pilha.
cpp
Copiar código
int topElement = myStack.top();
std::stack::empty():

Verifica se a pilha está vazia.
cpp
Copiar código
bool isEmpty = myStack.empty();
std::stack::size():

Retorna o número de elementos na pilha.
cpp
Copiar código
size_t size = myStack.size();
std::stack::swap(std::stack& other):

Troca o conteúdo de duas pilhas.
cpp
Copiar código
myStack.swap(otherStack);
std::stack::emplace() (disponível a partir do C++11):

Constrói um elemento no topo da pilha.
cpp
Copiar código
myStack.emplace(20);
std::stack::push() com move semantics:

Adiciona um elemento ao topo usando move semantics (C++11 ou posterior).
cpp
Copiar código
myStack.push(std::move(myValue));
std::stack::operator=:

Atribui uma pilha a outra.
cpp
Copiar código
myStack = otherStack;
std::stack::operator==:

Compara duas pilhas para igualdade.
cpp
Copiar código
if (myStack == otherStack) { /* ... */ }
std::stack::operator!=:

Compara duas pilhas para desigualdade.
cpp
Copiar código
if (myStack != otherStack) { /* ... */ }
std::stack::operator<:

Compara duas pilhas (menor).
cpp
Copiar código
if (myStack < otherStack) { /* ... */ }
std::stack::operator<=:

Compara duas pilhas (menor ou igual).
cpp
Copiar código
if (myStack <= otherStack) { /* ... */ }
std::stack::operator>:

Compara duas pilhas (maior).
cpp
Copiar código
if (myStack > otherStack) { /* ... */ }
std::stack::operator>=:

Compara duas pilhas (maior ou igual).
cpp
Copiar código
if (myStack >= otherStack) { /* ... */ }
std::stack::c:

Retorna a referência ao contêiner subjacente (normalmente um std::deque ou std::vector).
std::stack::size_type:

Tipo de dado para armazenar o tamanho da pilha (definido como size_t).
std::stack::value_type:

Tipo de dado dos elementos armazenados na pilha.
std::stack::container_type:

Tipo do contêiner subjacente.
std::stack::get_allocator():

Retorna o alocador usado pelo contêiner subjacente.
std::stack::pop() com checagem de tamanho:

Garante que não está tentando remover de uma pilha vazia (você pode adicionar lógica adicional).
std::stack::top() com checagem de tamanho:

Garante que não está acessando o topo de uma pilha vazia.
std::stack::clear() (não existe, mas pode ser implementado chamando pop() em um loop até a pilha estar vazia).

std::stack::iterator (não é parte da interface, mas pode ser obtido através do contêiner subjacente).

std::stack::const_iterator (semelhante ao iterator, obtido através do contêiner subjacente).

std::stack::begin() (usando o contêiner subjacente, não é um método direto).

std::stack::end() (usando o contêiner subjacente, não é um método direto).

std::stack::rbegin() (para iteração reversa, usando o contêiner subjacente).

std::stack::rend() (para iteração reversa, usando o contêiner subjacente).

std::stack::operator[] (não existe, mas pode ser simulado usando top() e pop() para acessar elementos).

std::stack::assign() (não existe, mas pode ser feito através de um loop e push()).

std::stack::emplace() com parâmetros:

Permite passar argumentos para o construtor do elemento que será empilhado.
std::stack::release() (não existe, mas é uma funcionalidade que poderia ser implementada para liberar elementos).

std::stack::push_if_not_exists() (não existe, mas pode ser implementado para evitar duplicatas).

std::stack::swap() em contexto de threads:

Garante a segurança em um ambiente de múltiplas threads (uso do mutex).
Resumo
Essas funções e métodos cobrem a maioria das operações que você pode precisar ao trabalhar com pilhas em C++. A std::stack fornece uma interface simples e eficiente para gerenciar dados de forma LIFO, permitindo a manipulação de elementos em uma ordem específica. Se precisar de mais detalhes ou exemplos sobre alguma função específica, sinta-se à vontade para perguntar!



