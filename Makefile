.PHONY: static

# Este se ejecuta por defecto al poner make
default: dynamic

# Target que se ejecutará cuando coloca make static
static: programa

programa: ./lib/libvector.a ./src/main.c
	@echo "Creando ejecutable"
	gcc -static -o programa ./src/main.c -lvector -L ./lib/ -I ./include/ -lm -g 
	@echo "EXITO"

./lib/libvector.a: ./lib/vector.c ./include/vector.h
	@echo "Creando libreria Estatica-> libvector.a"
	gcc -c ./lib/vector.c -I ./include/
	ar rcs ./lib/libvector.a vector.o

# Target que compilará el proyecto usando librerías dinámicas
dynamic: ./lib/libvector.so ./src/main.c
	@echo "Creando ejecutable"
	gcc -o programa ./src/main.c ./lib/libvector.so -I ./include/ -lm -g
	@echo "EXITO"

./lib/libvector.so: ./lib/vector.c ./include/vector.h
	@echo "Creando libreria Dinamica-> libvector.so"
	gcc -shared -fPIC -o ./lib/libvector.so ./lib/vector.c -I ./include/

# Limpiar archivos temporales
clean:
	rm *.o programa