
# Deque
Funções e Métodos Principais de std::deque
std::deque::push_back(const T& value):

Adiciona um elemento ao final da deque.
cpp
Copiar código
myDeque.push_back(10);
std::deque::push_front(const T& value):

Adiciona um elemento ao início da deque.
cpp
Copiar código
myDeque.push_front(5);
std::deque::pop_back():

Remove o elemento do final da deque.
cpp
Copiar código
myDeque.pop_back();
std::deque::pop_front():

Remove o elemento do início da deque.
cpp
Copiar código
myDeque.pop_front();
std::deque::front():

Retorna uma referência ao elemento no início da deque.
cpp
Copiar código
int frontElement = myDeque.front();
std::deque::back():

Retorna uma referência ao elemento no final da deque.
cpp
Copiar código
int backElement = myDeque.back();
std::deque::empty():

Verifica se a deque está vazia.
cpp
Copiar código
bool isEmpty = myDeque.empty();
std::deque::size():

Retorna o número de elementos na deque.
cpp
Copiar código
size_t size = myDeque.size();
std::deque::clear():

Remove todos os elementos da deque.
cpp
Copiar código
myDeque.clear();
std::deque::insert(iterator pos, const T& value):

Insere um elemento na posição especificada.
cpp
Copiar código
myDeque.insert(myDeque.begin() + 1, 15);
std::deque::erase(iterator pos):

Remove o elemento na posição especificada.
cpp
Copiar código
myDeque.erase(myDeque.begin());
std::deque::emplace_back() (disponível a partir do C++11):

Constrói um elemento no final da deque.
cpp
Copiar código
myDeque.emplace_back(20);
std::deque::emplace_front() (disponível a partir do C++11):

Constrói um elemento no início da deque.
cpp
Copiar código
myDeque.emplace_front(25);
std::deque::operator[]:

Acessa o elemento na posição especificada.
cpp
Copiar código
int element = myDeque[0];
std::deque::at():

Acessa o elemento na posição especificada com checagem de limites.
cpp
Copiar código
int element = myDeque.at(1);
std::deque::assign():

Atribui novos valores à deque.
cpp
Copiar código
myDeque.assign(3, 10); // 3 elementos com valor 10
std::deque::swap(std::deque& other):

Troca o conteúdo de duas deques.
cpp
Copiar código
myDeque.swap(otherDeque);
std::deque::operator=:

Atribui uma deque a outra.
cpp
Copiar código
myDeque = otherDeque;
std::deque::operator==:

Compara duas deques para igualdade.
cpp
Copiar código
if (myDeque == otherDeque) { /* ... */ }
std::deque::operator!=:

Compara duas deques para desigualdade.
cpp
Copiar código
if (myDeque != otherDeque) { /* ... */ }
std::deque::operator<:

Compara duas deques (menor).
cpp
Copiar código
if (myDeque < otherDeque) { /* ... */ }
std::deque::operator<=:

Compara duas deques (menor ou igual).
cpp
Copiar código
if (myDeque <= otherDeque) { /* ... */ }
std::deque::operator>:

Compara duas deques (maior).
cpp
Copiar código
if (myDeque > otherDeque) { /* ... */ }
std::deque::operator>=:

Compara duas deques (maior ou igual).
cpp
Copiar código
if (myDeque >= otherDeque) { /* ... */ }
std::deque::c:

Retorna a referência ao contêiner subjacente (normalmente um std::vector).
std::deque::value_type:

Tipo de dado dos elementos armazenados na deque.
std::deque::size_type:

Tipo de dado para armazenar o tamanho da deque (definido como size_t).
std::deque::get_allocator():

Retorna o alocador usado pelo contêiner subjacente.
std::deque::begin():

Retorna um iterador para o primeiro elemento da deque.
cpp
Copiar código
auto it = myDeque.begin();
std::deque::end():

Retorna um iterador para o elemento após o último elemento da deque.
cpp
Copiar código
auto it = myDeque.end();
std::deque::rbegin():

Retorna um iterador reverso para o último elemento da deque.
cpp
Copiar código
auto it = myDeque.rbegin();
std::deque::rend():

Retorna um iterador reverso para o elemento antes do primeiro elemento da deque.
cpp
Copiar código
auto it = myDeque.rend();
std::deque::capacity():

Retorna a capacidade atual da deque (não o número de elementos armazenados).
cpp
Copiar código
size_t capacity = myDeque.capacity();
std::deque::reserve() (não existe, mas pode ser simulado ao adicionar elementos sem crescimento dinâmico).

std::deque::shrink_to_fit():

Reduz a capacidade da deque para corresponder ao seu tamanho atual.
cpp
Copiar código
myDeque.shrink_to_fit();
Resumo
Essas funções e métodos cobrem a maioria das operações que você pode precisar ao trabalhar com deques em C++. O std::deque fornece uma interface eficiente para gerenciar dados, permitindo inserções e remoções em ambas as extremidades. Se precisar de mais detalhes ou exemplos sobre alguma função específica, sinta-se à vontade para perguntar!

O std::deque (Double-Ended Queue) é uma estrutura de dados da biblioteca padrão do C++ que permite a inserção e remoção eficiente de elementos em ambas as extremidades, ou seja, tanto no início quanto no final. Aqui estão as principais características e funcionalidades dos deques:

Acesso Rápido: Permite acesso constante a elementos por meio de indexação, assim como um vetor.

Inserções e Remoções: Suporta inserções e remoções rápidas no início e no final:

push_back: Adiciona um elemento ao final.
push_front: Adiciona um elemento ao início.
pop_back: Remove o elemento do final.
pop_front: Remove o elemento do início.
