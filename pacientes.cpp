#include <iostream>
#include <list>

 

using namespace std;

 

class FilaAtendimento {
public:
    FilaAtendimento() {}

 

    void enfileirar(int idade) {
        fila.push_back(idade);
    }

 

    int desenfileirar() {
        if (!fila.empty()) {
            int idade = fila.front();
            fila.pop_front();
            return idade;
        } else {
            return -1;
        }
    }

 

    void mostrarFilaSemRegra() {
        cout << "Fila sem a regra (por ordem de chegada): " << endl;
        for (auto idade : fila) {
            cout << idade << " ";
        }
        cout << endl;
    }

 

    void mostrarFilaComRegra() {
        cout << "Fila com a regra (prioridade para pacientes com mais de 60 anos): " << endl;
        list<int> fila_prioritaria;
        for (auto idade : fila) {
            if (idade > 60) {
                fila_prioritaria.push_back(idade);
            }
        }
        for (auto idade : fila) {
            if (idade <= 60) {
                fila_prioritaria.push_back(idade);
            }
        }
        for (auto idade : fila_prioritaria) {
            cout << idade << " ";
        }
        cout << endl;
    }

 

private:
    list<int> fila;
};

 

int main() {
    FilaAtendimento fila;

 

    fila.enfileirar(50);
    fila.enfileirar(55);
    fila.enfileirar(80);
    fila.enfileirar(25);
    fila.enfileirar(32);
    fila.enfileirar(67);
    fila.enfileirar(38);
    fila.enfileirar(40);
    fila.enfileirar(39);
    fila.enfileirar(68);
    fila.enfileirar(48);
    fila.enfileirar(26);
    fila.enfileirar(50);
    fila.enfileirar(64);
    fila.enfileirar(45);

 

    cout << "##### Fila sem a regra: #####" << endl;
    cout << endl;
    fila.mostrarFilaSemRegra();
    cout << endl;

 

 

    cout << "##### Fila com a regra: #####" << endl;
    cout << endl;
    fila.mostrarFilaComRegra();
    cout << endl;

 

    cout << "Desenfileirando os pacientes por ordem de chegada:" << endl;
    while (true) {
        int idade = fila.desenfileirar();
        if (idade == -1) {
            break;
        }
        cout << "Idade do paciente atendido: " << idade << endl;
    }

 

    return 0;
}
