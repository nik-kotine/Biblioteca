#include <iostream>
#include "Biblioteca.h"

int main() {
	Biblioteca biblio;
	biblio.agregarLibro(Libro("1984", "George Orwell", 1949));
	biblio.agregarLibro(Libro("Cien años de soledad", "Gabriel García Marquez", 1967));
	biblio.mostrarLibros();
	Biblioteca copia = biblio;
	Biblioteca otra;
	otra = biblio;
	Biblioteca movida = std::move(biblio);
	std::cout << "biblio después del move" << std::endl;
	biblio.mostrarLibros();
	Biblioteca destino;
	destino = std::move(copia);
	std::cout << "copia después del move" << std::endl;
	copia.mostrarLibros();
}
