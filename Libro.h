#ifndef LIBRO
#define LIBRO
#include <iostream>

class Libro {
	std::string titulo;
	std::string autor;
	int anyo;
public:
	Libro() = default;
	Libro(std::string _titulo, std::string _autor, int _anyo);
	void mostrarInformacion();
};

#endif
