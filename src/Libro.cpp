#include "Libro.h"
#include <iostream>

Libro::Libro(std::string _titulo, std::string _autor, int _anyo) {
	titulo = _titulo; autor = _autor; anyo = _anyo;
};

void Libro::mostrarInformacion() {
	std::cout << titulo << " (" << anyo << "), por " << autor << "\n";
};
