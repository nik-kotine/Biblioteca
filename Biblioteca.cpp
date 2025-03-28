#include "Libro.cpp"
class Biblioteca {
	Libro* libros;
	int cantidad;
	int capacidad = 2;
public:
	Biblioteca() { libros = new Libro[2]; }
	
};