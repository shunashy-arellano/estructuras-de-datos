#include <stdio.h>

struct nodo{
	char nombre[50];
	char apellido[50];
	int edad;
	float est;
	struct nodo *ptrsig;
};

int main(){
	struct nodo *ptrN;
	int tam,i;
	tam=sizeof(struct nodo);
	
	printf("El tamanio es %d\n",tam);
	
	for (i=0; ;i++){
		ptrN=(struct nodo*)malloc(sizeof(struct nodo));
		if (ptrN==NULL)
		break;
	}
	
	printf ("El tamaño de memoria es %lu\n",(i+1)*tam);
	return 0;
}
