#include <iostream>
#include <conio.h>
using namespace std;

//creo la funcion
int procesaNumeros(int& numero, int& intentos, int& resultado){

//cargo el numero
    int pensado = 76;

//verifico y resto intentos
        if (numero > pensado)
        {
           intentos--;
            resultado = 1;
        }else if(numero < pensado){
            intentos--;
            resultado = 2;
        }else if(numero == pensado){
             intentos = 0;
            resultado = 3;
        }

//retorno valores
return intentos, resultado;
        
}

int main(){
    //declaro variables a usar
    int numero, intentos=5,resultado = 0, respuesta;
    //bucle de intentos
    while (intentos > 0)
    {
        cout<< endl;
        cout << "Adivina que número estoy pensando entre el 1 y el 100" << endl;
        cin >> numero;  
        procesaNumeros(numero, intentos ,resultado);

        if (resultado == 1)
        {
            cout<< endl;
           cout << "El número escrito fue mayor al que pensé, te quedan" << endl;
        }else if(resultado == 2){
            cout<< endl;
            cout << "El número escrito fue menor al que pensé" << endl;
        }else if(resultado == 3){
            cout<< endl;
             cout << "El número escrito es correcto al que pensé" << endl;
        }

        cout<< endl;
        cout << "Todavía tienes "<< intentos <<  " intentos aún." << endl;
        cout << "¿Quiéres volver a intentarlo?" << endl;
        cout << "1) Sí" << endl;
        cout << "2) No" << endl;
        cin >> respuesta;

        //ver si saldrá el usuario
        switch (respuesta)
        {
        case 1:
            system("PAUSE");
        break;
        case 2:
            exit(1);
        break;   
        }
    }
}