#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int ingresarValor(int valor){
    printf("Ingrese un valor:\n");
    scanf("%d",&valor);
    return valor;
}

int imprimeAleatorio(int minimo, int maximo, int cuenta){
    int num;
    srand(time(0));
    for (int i = 0; i < cuenta; i++)
    {
        num = (rand() % (maximo - minimo +1))+ minimo;
             
    }
    return num;

}
void juegoAdivina(char const*arr[], int size){
int reordena,a, b;
if (size <= 2)
{
    printf("Ingrese mas de dos numeros\n");
}else{
 int juego = 1;

   
 for (int i = 1; i < size-1; i++)
 {
    a = atoi(arr[i]);
    b = atoi(arr[i+1]);   
 }
if (a > b){
    printf("Intervalo invalido, intente de nuevo\n");
            
}else{
for (int i = a; i <= b; i++){
    printf("%d\n",i);
}
int tamano = b-a;
int acierto = tamano/3;
while (acierto!=0)
{   int aleatorio = imprimeAleatorio(a,b,1);
    int valor = ingresarValor(1);
    if (aleatorio == valor)
    {
        printf("Acertaste, el numero es: %d\n",aleatorio);
        printf("Lo lograste en %d intentos\n",acierto);
        break;
    }else
    {
        printf("Intenta de nuevo, te quedan %d intentos\n",acierto);
    }
    acierto--;
}

}
} 
}


 //printf("%d\n", reordena)
int main(int argc, char const *argv[])
{
    //reOrdenarArreglo(argv,argc);
    //imprimeAleatorio(6,10,1);
    juegoAdivina(argv,argc);

    
    //printf("%d\n", intentos);

}