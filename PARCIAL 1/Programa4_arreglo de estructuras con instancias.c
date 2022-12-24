#include <stdio.h>

struct Persona{
	char nombre[30];
	int edad;
	float est;
	char sexo;
};

int main(){
	
	struct Persona arreglo[5];
	int i;
	
	for (i=0;i<=4;i++){
		printf ("Ingresa nombre de la persona %d: \n",i+1);
		gets(arreglo[i].nombre);
		printf ("Ingresa edad de la persona %d: \n",i+1);
		scanf ("%d",&arreglo[i].edad);
		fflush(stdin);
		printf ("Ingresa estatura de la persona %d: \n",i+1);
		scanf ("%f",&arreglo[i].est);
		fflush(stdin);
		printf ("Ingresa sexo de la persona %d: \n",i+1);
		arreglo[i].sexo=getchar();
		fflush(stdin);
	}
	
	for (i=0;i<=4;i++){
		printf ("En la celda %d esta el nombre %s en la direccion %lu.\n",i,arreglo[i].nombre,&arreglo[i].nombre);
		printf ("En la celda %d esta la edad %d en la direccion %lu.\n",i,arreglo[i].edad,&arreglo[i].edad);
		printf ("En la celda %d esta la estatura %f en la direccion %lu.\n",i,arreglo[i].est,&arreglo[i].est);
		printf ("En la celda %d esta el sexo %c en la direccion %lu.\n",i,arreglo[i].sexo,&arreglo[i].sexo);
	}
	
}
