#include <stdio.h>

struct Persona{
	char nombre[30];
	int edad;
	float est;
	char sexo;
};

struct Nodo{
	struct Persona arreglo[5];
	int i;	
};

int main(){
	struct Nodo var;
	
	for (var.i=0;var.i<=4;var.i++){
		fflush(stdin);
		printf ("Ingrese nombre: \n");
		gets (var.arreglo[var.i].nombre);
		fflush(stdin);
		printf ("Ingrese la edad: \n");
		scanf ("%d",&var.arreglo[var.i].edad);
		fflush(stdin);
		printf ("Ingresa la estatura: \n");
		scanf ("%f",&var.arreglo[var.i].est);
		fflush(stdin);
		printf ("Ingresa el sexo: \n");
		var.arreglo[var.i].sexo=getchar();
	}
	
	for (var.i=0;var.i<=4;var.i++){
		printf ("En la celda %d esta el nombre %s y en la direccion %lu\n",var.i,var.arreglo[var.i].nombre,&var.arreglo[var.i].nombre);
		printf ("En la celda %d esta la edad %d y en la direccion %lu\n",var.i,var.arreglo[var.i].edad,&var.arreglo[var.i].edad);
		printf ("En la celda %d esta la estatura %f y en la direccion %lu\n",var.i,var.arreglo[var.i].est,&var.arreglo[var.i].est);
		printf ("En la celda %d esta el sexo %c y en la direccion %lu\n",var.i,var.arreglo[var.i].sexo,&var.arreglo[var.i].sexo);
}
}
