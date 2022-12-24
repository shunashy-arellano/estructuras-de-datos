// CASO 2: INSTANCIA A ESTRUCTURA CON APUNTADOR AL ARREGLO

#include <stdio.h>

struct Nodo{
	int arreglo[5];
	int *ptr;
};

int main(){
	struct Nodo var;
	
	for (var.ptr=var.arreglo;var.ptr<=&var.arreglo[4];var.ptr++){
		printf ("Ingresa el dato %d: \n",(int)(var.ptr-var.arreglo+1));
		scanf ("%d",var.ptr); //Var es toda la instancia
	}
	
	printf ("El tamaño del dato nodo es %d.\n",sizeof(struct Nodo));
	printf ("La direccion de var es %lu\n",var);
	
	for(var.ptr=var.arreglo;var.ptr<=&var.arreglo[4];var.ptr++){
		printf ("En la celda %d esta el valor %d y en la direccion %lu.\n",(int)(var.ptr-var.arreglo),(*(var.ptr)),var.ptr);
	}
}
