// CASO 1: INSTANCIA A ESTRUCTURA CON INDICE AL ARREGLO

#include <stdio.h>

struct Nodo{
	int arreglo[5];
	int i;	
};

int main(){
	struct Nodo var;
	
	for (var.i=0;var.i<=4;var.i++){
		printf ("Ingresa el dato %d: \n",var.i+1);
		scanf ("%d",&var.arreglo[var.i]);
	}
	
	printf ("El tamaño del dato nodo es: %d \n",sizeof(struct Nodo));
	printf ("La direccion de var es: %lu \n",&var);
	
	for (var.i=0;var.i<=4;var.i++){
		printf ("En la celda %d esta el valor %d y en la direccion %lu.\n",var.i,var.arreglo[var.i],&var.arreglo[var.i]);
	}
}
