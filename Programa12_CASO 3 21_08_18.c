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
	struct Nodo var,*ptrs;
	ptrs=&var;
	
	for (ptrs->i=0;ptrs->i<=4;ptrs->i++){
		fflush(stdin);
		printf ("Ingrese el nombre: \n");
		gets(ptrs->arreglo[ptrs->i].nombre);
		fflush(stdin);
		printf ("Ingrese la edad: \n");
		scanf ("%d",&ptrs->arreglo[ptrs->i].edad);
		fflush(stdin);
		printf ("Ingresa la estatura: \n");
		scanf ("%f",&ptrs->arreglo[ptrs->i].est);
		fflush(stdin);
		printf ("Ingresa el sexo: \n");
		ptrs->arreglo[ptrs->i].sexo=getchar();
	}
	
	for (ptrs->i=0;ptrs->i<=4;ptrs->i++){
		printf ("En la celda %d esta el nombre %s y en la direccion %lu\n",ptrs->i+1,ptrs->arreglo[ptrs->i].nombre,&ptrs->arreglo[ptrs->i].nombre);
		printf ("En la celda %d esta la edad %d y en la direccion %lu\n",ptrs->i+1,ptrs->arreglo[ptrs->i].edad,&ptrs->arreglo[ptrs->i].edad);
		printf ("En la celda %d esta la estatura %f y en la direccion %lu\n",ptrs->i+1,ptrs->arreglo[ptrs->i].est,&ptrs->arreglo[ptrs->i].est);
		printf ("En la celda %d esta el sexo %c y en la direccion %lu\n",ptrs->i+1,ptrs->arreglo[ptrs->i].sexo,&ptrs->arreglo[ptrs->i].sexo);
}
}
