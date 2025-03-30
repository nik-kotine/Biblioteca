#ifndef BIBLIOTECA
#define BIBLIOTECA
#include <iostream>
#include "Libro.h"

class Biblioteca {
	Libro* libros;
	int cantidad;
	int capacidad;
public:
	Biblioteca();
	~Biblioteca();
	Biblioteca(const Biblioteca& other);
	Biblioteca(Biblioteca&& other) noexcept;
	void agregarLibro(const Libro& other);
	void mostrarLibros() const;
	Biblioteca& operator=(const Biblioteca& other);
	Biblioteca& operator=(Biblioteca&& other) noexcept;
};

#endif
