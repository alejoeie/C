#include"calc.h"

int suma2(int a, int b){
    return a + b;
}
int suma3(int num1, int num2,int num3){
    int resultado = suma2(num1,num2);
    return suma2(resultado,num3);
}
int multi2(int var1, int var2){
    return var1*var2;
}
int multi3(int var1, int var2, int var3){
    int producto = multi2(var1,var2);
    return multi2(producto,var3);
}
int resta2(int num1, int num2){
    return num1-num2;
}
double divide2(double var1, double var2){
    return var1/var2;
}
int pot2(int num1){
    return multi2(num1, num1);

}
int pot3(int valor){
    return multi3(valor, valor, valor);
}