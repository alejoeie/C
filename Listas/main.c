#include<stdio.h>
#include<stdlib.h>

typedef struct  nodo
{
    int dato;
    struct nodo * next;
    
    
}nodo_t;


void imprimirNodo(nodo_t* nodo){
    printf("Nodo->dato: %d, nodo->next:%o\n",nodo->dato,nodo->next);
}

void printList(nodo_t* head){
    nodo_t* elem = head;
    while (elem!=NULL)
    {
        imprimirNodo(elem);
        elem = elem->next;
        
    }
    

}
int main(int argc, char const *argv[])
{
    nodo_t* head;
    head = malloc(sizeof(nodo_t));
    head->dato=125;
    head->next=NULL;
    imprimirNodo(head);

    nodo_t* elem;
    elem = head;

    if (elem->next==NULL)
    {
        elem->next=malloc(sizeof(nodo_t));
        elem = elem->next;
        elem->dato=420;
        elem->next=NULL;
        
    }
    
    printList(head);









    free(elem);
    free(head);
    return 0;
}
