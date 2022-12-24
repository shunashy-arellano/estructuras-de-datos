#include <stdio.h>

struct Persona{
	char nombre[30];
	int edad;
	float est;
	char sexo;
};

struct Nodo{
	struct Persona arreglo[5];
	struct Persona *ptr;
};

int main(){
	struct Nodo var;
	
	for (var.ptr=var.arreglo;var.ptr<=&var.arreglo[4];var.ptr++){
		fflush(stdin);
		printf ("Ingrese el nombre: \n");
		gets(var.ptr->nombre);
		fflush(stdin);
		printf ("Ingrese la edad: \n");
		scanf ("%d",&var.ptr->edad);
		fflush(stdin);
		printf ("Ingresa la estatura: \n");
		scanf ("%f",&var.ptr->est);
		fflush(stdin);
		printf ("Ingresa el sexo: \n");
		var.ptr->sexo=getchar();
	}
	
	for (var.ptr=var.arreglo;var.ptr<=&var.arreglo[4];var.ptr++){
		printf ("En la celda %d esta el nombre %s y en la direccion %lu\n",(int)(var.ptr-var.arreglo),var.ptr->nombre,&var.ptr->nombre);
		printf ("En la celda %d esta la edad %d y en la direccion %lu\n",(int)(var.ptr-var.arreglo),var.ptr->edad,&var.ptr->edad);
		printf ("En la celda %d esta la estatura %f y en la direccion %lu\n",(int)(var.ptr-var.arreglo),var.ptr->est,&var.ptr->est);
		printf ("En la celda %d esta el sexo %c y en la direccion %lu\n",(int)(var.ptr-var.arreglo),var.ptr->sexo,&var.ptr->sexo);
}
}
