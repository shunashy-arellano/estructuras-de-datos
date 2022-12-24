#include <stdio.h>

struct nodo{
	int num;
	struct nodo *ptrsig;
};

int main(){
	struct nodo *ptrN, *ptrRef, *ptrRec;
	ptrN=(struct nodo*)malloc(sizeof(struct nodo));
	printf("Ingresa dato:\n");
	scanf("%d",&ptrN->num);
	
	ptrN->ptrsig=NULL;
	ptrRef=ptrN;
	//
	ptrN=(struct nodo*)malloc(sizeof(struct nodo));
	printf ("Ingresa dato:\n");
	scanf("%d",&ptrN->num);
	
	ptrN->ptrsig=ptrRef;
	ptrRef=ptrN;
	//
	ptrRec=ptrRef;
	
	while(ptrRec!=NULL){
		printf ("%d\n",ptrRec->num);
		ptrRec=ptrRec->ptrsig;
	}
	
	/*
	
	Para liberar un nodo
	
	ptrba=ptrRef;
	ptrRef=ptrRef->ptrsig;
	free(ptrba);
	
	*/

	return 0;
}
