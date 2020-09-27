#include<stdio.h>
void busqueda(int arr[], int size, int indice){
    for(int i = 0; i < size; i++)
    {
        if (indice == arr[i])
        {
            printf("%d\n", i);
        }
        
    }
}

int main(int argc, char const *argv[])
{
    /*int prueba [] = {1, 14, 9, 7, 20, 14};
    /*busqueda(prueba,6,14);*/
    int vector [] = {11, 4, 9, 5, 8, 11, 9, 11, 4, 9, 5, 8, 11, 9, 11, 4, 9, 5, 8, 11, 9};
    busqueda(vector,21,100);
    return 0;
}
