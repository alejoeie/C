#include<stdio.h>

void infoBanco(int num, char*nombre, float cuenta, char dolar){
    printf("Usuario: %s\n"
    "Edad: %d\n"
    "Fondos: %c%.1f\n",nombre,num,dolar,cuenta);
}
int main(int argc, char const *argv[])
{
    infoBanco(17,"Peter Parker",4.5f,'$');
    return 0;
}
