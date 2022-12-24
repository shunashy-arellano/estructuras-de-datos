#include <stdio.h>

struct Persona{
	char nombre[30];
	int edad;
	float est;
	char sexo;
};

int main(){
	
	struct Persona arreglo[5], *ptrs;
	ptrs=&arreglo;
	int i;
	
	for (ptrs=arreglo;ptrs<=arreglo[4];ptrs++){
		printf ("Ingresa nombre de la persona %d: \n",(int)(ptrs-arreglo+1));
		gets(ptrs->nombre);
		printf ("Ingresa edad de la persona %d: \n",(int)(ptrs-arreglo+1));
		scanf ("%d",&ptrs->edad);
		fflush(stdin);
		printf ("Ingresa estatura de la persona %d: \n",(int)(ptrs-arreglo+1));
		scanf ("%f",&ptrs->est);
		fflush(stdin);
		printf ("Ingresa sexo de la persona %d: \n",(int)(ptrs-arreglo+1));
		ptrs->sexo=getchar();
		fflush(stdin);
	}
	
	for (ptrs=arreglo;ptrs<=arreglo[4];ptrs++){
		printf ("En la celda %d esta el nombre %s en la direccion %lu.\n",(int)(ptrs-arreglo),ptrs->nombre,&ptrs->nombre);
		printf ("En la celda %d esta la edad %d en la direccion %lu.\n",(int)(ptrs-arreglo),ptrs->edad,&ptrs->edad);
		printf ("En la celda %d esta la estatura %f en la direccion %lu.\n",(int)(ptrs-arreglo),ptrs->est,&ptrs->est);
		printf ("En la celda %d esta el sexo %c en la direccion %lu.\n",(int)(ptrs-arreglo),ptrs->sexo,&ptrs->sexo);
	}
}
