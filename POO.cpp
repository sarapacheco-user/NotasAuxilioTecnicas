O que são Classes e Objetos?
Classe: Uma classe é um modelo ou um blueprint que define um tipo de dado, incluindo suas propriedades (atributos) e comportamentos (métodos).
Objeto: Um objeto é uma instância de uma classe. É a representação concreta de uma classe, com valores específicos para os atributos.
Estrutura Básica de uma Classe
cpp
Copiar código
class NomeDaClasse {
public: // Acessibilidade pública
    // Atributos
    int atributo1;
    std::string atributo2;

    // Métodos
    void metodo1() {
        // Código do método
    }

    int metodo2(int param) {
        return param + 1;
    }
};
Criando e Usando Objetos
Declaração e Instanciação:

Você pode criar objetos da classe utilizando o nome da classe como tipo.
cpp
Copiar código
NomeDaClasse objeto; // Declara um objeto
Acessando Atributos e Métodos:

Use o operador ponto (.) para acessar atributos e métodos do objeto.
cpp
Copiar código
objeto.atributo1 = 10; // Acessa e modifica um atributo
objeto.metodo1();      // Chama um método
Exemplo Completo
cpp
Copiar código
#include <iostream>
#include <string>

class Carro {
public:
    std::string marca;
    int ano;

    void mostrarInfo() {
        std::cout << "Marca: " << marca << ", Ano: " << ano << std::endl;
    }
};

int main() {
    Carro meuCarro;         // Criando um objeto da classe Carro
    meuCarro.marca = "Fusca"; // Atribuindo valores aos atributos
    meuCarro.ano = 1975;

    meuCarro.mostrarInfo(); // Chamando um método do objeto

    return 0;
}
Construtores e Destrutores
Construtor: Um método especial que é chamado quando um objeto é criado. É usado para inicializar os atributos.
cpp
Copiar código
class Carro {
public:
    std::string marca;
    int ano;

    // Construtor
    Carro(std::string m, int a) : marca(m), ano(a) {}
};
Destrutor: Um método especial que é chamado quando um objeto é destruído. Usado para liberar recursos.
cpp
Copiar código
~Carro() {
    // Código de limpeza, se necessário
}
Encapsulamento
O encapsulamento é a prática de ocultar os detalhes internos de uma classe. Atributos podem ser declarados como private, e métodos public podem ser usados para acessar ou modificar esses atributos.
cpp
Copiar código
class ContaBancaria {
private:
    double saldo;

public:
    void depositar(double valor) {
        saldo += valor;
    }

    double getSaldo() {
        return saldo;
    }
};
Herança
Permite criar uma nova classe baseada em uma classe existente, reutilizando seus atributos e métodos.
cpp
Copiar código
class Veiculo { /*...*/ };

class Carro : public Veiculo { /*...*/ };
Polimorfismo
Permite que uma única interface seja utilizada para diferentes tipos de objetos, geralmente através de funções virtuais.
cpp
Copiar código
class Animal {
public:
    virtual void fazerSom() {
        std::cout << "Som de animal" << std::endl;
    }
};

class Cachorro : public Animal {
public:
    void fazerSom() override {
        std::cout << "Au Au" << std::endl;
    }
};
Resumo
Classes: Define o modelo; contém atributos e métodos.
Objetos: Instâncias das classes.
Encapsulamento: Protege os dados.
Herança: Permite criar hierarquias de classes.
Polimorfismo: Permite que diferentes classes sejam tratadas como uma instância da mesma classe base.
Esses conceitos são fundamentais para a programação orientada a objetos em C++. Se precisar de mais detalhes ou exemplos, é só perguntar!
