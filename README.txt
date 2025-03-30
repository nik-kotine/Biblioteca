Al correr el main.cpp, sólo se deberían ver cuatro líneas:

1984 (1949), por George Orwell
Cien años de soledad (1967), por Gabriel García Marquez
biblio después del move
copia después del move

biblio y copia deberían estar completamente vacíos después del std::move, por lo que usar el método mostrarLibros() no imprimirá nada.
Además, sus atributos cantidad y capacidad, y libros deberían ser 0 y nullptr respectivamente.
Esto último fue hecho para evitar problemas relacionados a memory leaks.

BRANCH organizado:

Ahora el CMakeLists.txt se ha modificado para que el código compile correctamente a pesar del diferente lugar de los archivos .cpp y .h.
include_directories(headers) evita que se tengan que colocar paths completos desde los .cpp hasta los .h.
CMakeLists.txt busca todos los archivos .cpp y los guarda en la variable SOURCES, usada luego para crear el ejecutable final a partir de dichos archivos en la última línea.
