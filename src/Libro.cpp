class Libro {
	std::string titulo;
	std::string autor;
	int anyo;
public:
	Libro(std::string _titulo, std::string _autor, int _anyo) {
		titulo = _titulo; autor = _autor; anyo = _anyo;
	}
	mostrarLibro() { std::cout << titulo << "(" << anyo << ") by: " << autor << "\n";  }
}