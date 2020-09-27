#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
    int arr[20];
    if (argc > 20 || argc < 2)
    {
        printf("Introduzca la cantidad correcta de valores \n");
    }else
    {   int i,j;
        for (i = 1; i < argc; i++)
        {  
            arr[i]=atoi(argv[i]);

        }
        for (i = 1; i < argc; i++)
        {
            int noDuplicado = 0;
            for (int j = i+1; j < argc; j++)
            {
                if (arr[i]==arr[j])
                {
                    noDuplicado = 1;
                }
                
            }
            if (noDuplicado == 0)
            {
                printf("%d\n",arr[i]);
            }
            
            
        }
        


}
}