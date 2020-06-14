#include <iostream>
using namespace std;

int verificar(int& anio, bool& resultado){

//Declaro para los calculos
int identificar_a = anio%400;
int identificar_b = anio%4;
int identificar_c = anio%100;

//verifico los datos
if (identificar_a == 0)
{
    resultado = true;
}else if(identificar_b == 0 and identificar_c != 0){
    resultado = true;
}else{
    resultado = false;
}

//retorno la funcion
return resultado;
}

int main(){
    //Declaro las variables a usar
    int anio;
    bool resultado;

    //pido al usuario los datos
    cout << "Ingrese el año a verificar si es biciesto:"<<endl;
    cin >> anio;

    //paso los datos a la funcion
    verificar(anio, resultado);

    //Imprimo el resultado
    if (resultado == true)
    {
        cout << "El año es biciesto"<<endl;
    }else{
        cout << "El año no es biciesto"<<endl;
    } 
}