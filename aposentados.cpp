#include <iostream>
#include <list>

using namespace std;

class Fila {
public:
	Fila() {}
	
	void enfileirar(string elemento) {
		lista.push_back(elemento);
	}
	
	string desenfileirar(){
		if(lista.empty()){
			return 0;
		}
		
		string elemento = lista.front();
		lista.pop_front();
		return elemento;
	}
	
	bool vazia() {
		return lista.empty();
	}
	
	void mostrarAposentados(){
		for(auto i : lista){
			cout << "Aposentados: " << i << endl;
		}
	}

private:
	list<string> lista;
	
};

int main (){
	Fila fila;
	

	
	fila.enfileirar("Joao");
	fila.enfileirar("Maria");
	fila.enfileirar("Jose");
	fila.enfileirar("Eva");
	fila.enfileirar("Adao");
	fila.enfileirar("Joaquim");
	fila.enfileirar("Jorge");
	fila.enfileirar("Aparicio");
	fila.enfileirar("Bartolomeu");
	fila.enfileirar("Ezequias");
	fila.desenfileirar();
	fila.desenfileirar();
	fila.desenfileirar();
	fila.desenfileirar();
	fila.desenfileirar();
	fila.enfileirar("Ramom");
	fila.enfileirar("Nair");
	fila.enfileirar("Gerson");
	fila.enfileirar("Edmundo");
		
	fila.mostrarAposentados();
	

	return 0;
}

