#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])

{   
    
    if (argc<=2)
    {
        printf("Debe ingresar mas de dos numeros\n");
    }else
    {  
        
        int mayor = 0;
        int segundoMayor,aux;
        for ( int i = 0; i < argc-1; i++)
        {  
            aux = atoi(argv[i]);
        
            
            if (aux>mayor)
            {
                segundoMayor=mayor;
                mayor=aux;
            }
            if (aux != segundoMayor)
            {
                segundoMayor=mayor;
            }
            else if (aux<mayor && aux>segundoMayor)
            {
                segundoMayor = aux;
            }
            
                
        }
                    
    printf("El segundo valor mayor es:%d\n",segundoMayor);
        
        
    }
    
    
    return 0;
}