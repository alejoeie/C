#include<stdio.h>
#include<stdlib.h>
typedef struct Node{
  int data;
  struct Node* next_ptr;
}nodo;

void insertElements(nodo *lista, int dato);
void showList(nodo *lista);

// &algo -> 0x0axcd
// *&algo -> 
int main(){
  int a  = 5;
  nodo *lista = malloc(sizeof(nodo));
  insertElements(lista, a);
  insertElements(lista, 76);
  insertElements(lista, 80);
  showList(lista);

  free(lista);
  return 0;
}
// Append [1,2,3,4,.......,100, [elementonuevo]] 
void insertElements(nodo *lista, int dato){
  nodo *new_node = lista;
  while(new_node->next_ptr!=NULL){
    new_node = new_node->next_ptr;
  }

  // [ dato |  0xa456 ] -> [dato|null]
  new_node->next_ptr = malloc( sizeof(nodo));
  new_node = new_node->next_ptr;
  new_node->data = dato;
  new_node->next_ptr = NULL;
}
void showList(nodo *lista){
  nodo*cur = lista;
  while(cur!=NULL){
    printf("Nodo: %d, Next: %p ->", cur->data, cur->next_ptr);
    cur = cur->next_ptr;
  }
}



