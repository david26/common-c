calculadora:	inicio.o	biblioteca.o	biblioteca.h
	gcc inicio.o	biblioteca.o -o	calculadora
	     
inicio.o: inicio.c	biblioteca.h	
	gcc -c inicio.c	

operaciones.o: biblioteca.c	biblioteca.h
	gcc -c biblioteca.c
	       
all: calculadora

clean:
	rm calculadora *.o