#include <stdio.h>

struct Persona{
	char nombre[30];
	int edad;
	float est;
	char sexo;
};

struct Nodo{
	struct Persona arreglo[5];
	int *ptr;
};

int main(){
	struct Nodo var, *ptrs;
	ptrs=&var;
	
	for (ptrs->ptr=ptrs->arreglo;ptrs->ptr<=&ptrs->arreglo[4];ptrs->ptr++){
		fflush(stdin);
		printf ("Ingrese el nombre: \n");
		gets(ptrs->ptr->nombre);
		fflush(stdin);
		printf ("Ingrese la edad: \n");
		scanf ("%d",&ptrs->ptr->edad);
		fflush(stdin);
		printf ("Ingresa la estatura: \n");
		scanf ("%f",&ptrs->ptr->est);
		fflush(stdin);
		printf ("Ingresa el sexo: \n");
		ptrs->ptr->sexo=getchar();
	}
	
	for (ptrs->ptr=ptrs->arreglo;ptrs->ptr<=&ptrs->arreglo[4];ptrs->ptr++){
		printf ("En la celda %d esta el nombre %s y en la direccion %lu\n",(int)(ptrs->ptr-ptrs->arreglo),ptrs->ptr->nombre,&ptrs->ptr->nombre);
		printf ("En la celda %d esta la edad %d y en la direccion %lu\n",(int)(ptrs->ptr-ptrs->arreglo),ptrs->ptr->edad,&ptrs->ptr->edad);
		printf ("En la celda %d esta la estatura %f y en la direccion %lu\n",(int)(ptrs->ptr-ptrs->arreglo),ptrs->ptr->est,&ptrs->ptr->est);
		printf ("En la celda %d esta el sexo %c y en la direccion %lu\n",(int)(ptrs->ptr-ptrs->arreglo),ptrs->ptr->sexo,&ptrs->ptr->sexo);
}
}
