#include <iostream>
#include "Biblioteca.h"

Biblioteca::Biblioteca() {
	capacidad = 2; cantidad = 0; libros = new Libro[capacidad];
};
Biblioteca::~Biblioteca() {
	delete[] libros;
};
Biblioteca::Biblioteca(const Biblioteca& other) {
	capacidad = other.capacidad;
	cantidad = other.cantidad;
	libros = new Libro[capacidad];
	for (int i=0; i<cantidad; i++) { libros[i] = other.libros[i]; }
};
Biblioteca::Biblioteca(Biblioteca&& other) noexcept {
	cantidad = other.cantidad;
	capacidad = other.capacidad;
	libros = other.libros;
	other.cantidad = 0;
	other.capacidad = 0;
	other.libros = nullptr;
};
void Biblioteca::agregarLibro(const Libro& other) {
	if (cantidad < capacidad) { libros[cantidad] = other; cantidad++; }
	else {
		Libro* temp = new Libro[2*capacidad];
		for (int i=0; i<cantidad; i++) { temp[i] = libros[i]; }
		temp[cantidad] = other;
		delete[] libros;
		libros = temp;
		capacidad = capacidad*2; cantidad++;
	}
};
void Biblioteca::mostrarLibros() const {
	if (cantidad == 0) { return; }	
	for (int i=0; i<cantidad; i++) { libros[i].mostrarInformacion(); }
};
Biblioteca& Biblioteca::operator=(const Biblioteca& other) {
	delete[] libros;
	capacidad = other.capacidad;
	cantidad = other.cantidad;
	libros = new Libro[capacidad];
	for (int i=0; i<cantidad; i++) { libros[i] = other.libros[i]; }
	return *this;
};
Biblioteca& Biblioteca::operator=(Biblioteca&& other) noexcept {
	delete[] libros;
	capacidad = other.capacidad;
	cantidad = other.cantidad;
	libros = other.libros;
	other.capacidad = 0;
	other.cantidad = 0;
	other.libros = nullptr;
	return *this;
};
