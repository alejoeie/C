#include<stdio.h>
void textoAutomatico(){
    

}
int main(int argc, char const *argv[])
{
    int num =17;
    char*nombre = "Peter Parker";
    float cuenta = 4.5f;
    char dolar = '$';

    printf ("Hola! \n\nMi nombre es %s.\n\n"
    "Tengo %d años y en este momento estoy buscando empleo como fotógrafo amateur.\n"
    "¡Acepto cualquier encargo! Sólamente me quedan %c%.1f en mi cuenta, me urge el trabajo.\n"
    ,nombre,num,dolar,cuenta);

    return 0;
}
