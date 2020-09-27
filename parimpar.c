#include<stdio.h>
#include<stdlib.h>


int main(int argc, char const *argv[])
{
    if (argc <= 1)
    {
        printf("ERROR\n");
        
    }else
    {
        int condicion = atoi(argv[1]);

        switch (argc)
        {
        case 2:
            if (condicion%2==0)
            {
                printf("El numero es par\n");
            }
            else
            {
                printf("El numero es impar\n");
            }
            
            
            break;
        
        default:
            printf("ERROR\n");
            break;
        }
    }

return 0;
    
}