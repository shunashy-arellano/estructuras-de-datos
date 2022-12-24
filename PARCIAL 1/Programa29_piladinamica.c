#include<stdio.h>
#include<stdlib.h>

struct nodo{
	int dato;
	struct nodo *ptrS;
};

struct nodo* crearnodo(int MyData);
void meter(struct nodo *ptrRef, int data);
void sacar(struct nodo *ptrRef);
void mostrar(struct nodo *ptrRef);
int menu();

int main(){
	struct nodo var,*miptr;
	int datito;
	miptr=&var;
	miptr=crearnodo(-1);
	for(;;){
		switch(menu()){
			case 1:
				printf("\nIngrese el dato a meter...");
				scanf("%d",&datito);
				meter(miptr,datito);
				break;
			case 2:
				mostrar(miptr);
				break;
			case 3:
				sacar(miptr);			
				break;
			case 4:
				exit(0);
		}
	}
	printf("\n\n");
	return 0;
}

int menu(){
	int opcion;
	printf("\nIngrese 1 para meter dato");
	printf("\nIngrese 2 para contenido de la pila");
	printf("\nIngrese 3 para sacar wea de la pila");	
	printf("\nIngrese 4 para salir");	
	printf("\nOpcion:...");
	scanf("%d",&opcion);
	return(opcion);
}

struct nodo* crearnodo(int MyData){
	struct nodo *ptrN;
	ptrN=(struct nodo*)malloc(sizeof (struct nodo));
	ptrN->dato=MyData;
	ptrN->ptrS=NULL;
	return ptrN;
}

void meter(struct nodo *ptrRef, int data){
	struct nodo *ptrNuevo;
	ptrNuevo=crearnodo(data);
	if(ptrRef->ptrS==NULL)
		ptrRef->ptrS=ptrNuevo;
	else{
		ptrNuevo->ptrS=ptrRef->ptrS;
		ptrRef->ptrS=ptrNuevo;
	}
}

void sacar(struct nodo *ptrRef){
	struct nodo *ptrAux;
	if(ptrRef->ptrS==NULL)
		printf("\nPila vacia");
	else{
		ptrAux=ptrRef->ptrS;
		printf("\nEl dato recuperado es...%d \n",ptrAux->dato);
		ptrRef->ptrS=ptrAux->ptrS;
		free(ptrAux);
	}
}

void mostrar(struct nodo *ptrRef){
	struct nodo *ptrRec;
	ptrRec=ptrRef->ptrS;
	while(ptrRec!=NULL){
		printf("\nEl dato es ...%d\n",ptrRec->dato);
		ptrRec=ptrRec->ptrS;
	}
}
