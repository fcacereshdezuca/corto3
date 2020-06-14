#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;

int main()
{

//genero una estructura para las personas
struct Persona
{
    string nombre;
    int hora_trabajadas;
    int horas_extra;
};

//preparo el arraylist
Persona *persona = new Persona[50];

//declaro las variables a usar
    int empleados;
    float horas_trabajadas = 0, horas_extra = 0, salario_real = 0, isr = 0, isss = 0, afp = 0, total = 0;

//pido los empleado a ingresar
    cout << "¿Cuántos empleados desea ingresar? " << endl;
    cin >> empleados;

//bucleo con el array list cada proceso de entrada y salida
    for (size_t i = 0; i < empleados; i++)
    {
        cout<< endl;
        cout<<"Ingrese nombre "<<i+1<<": ";
        cin >> persona[i].nombre;

        cout<<"Ingrese las horas trabajadas de la persona "<<i+1<<": ";
        cin >> persona[i].hora_trabajadas;

        cout<<"Ingrese las horas extra de la persona "<<i+1<<": ";
        cin >> persona[i].horas_extra;

        for (size_t j = 0; j < empleados-empleados+1; j++)
        {
       cout<< endl;
       cout<<"Los calculos para "<< persona[i].nombre <<" son: " << endl;
            //hago los calculos
            horas_trabajadas = persona[i].hora_trabajadas * 1.75;
            horas_extra = persona[i].horas_extra * 2.50;
            total = horas_trabajadas+horas_extra;

            cout<< endl;
            cout << "El salario por horas normales es:" << horas_trabajadas << endl;
            cout << "El salario por horas extra es:" << horas_extra << endl;
            cout << "El salario total :  " << total << endl;

            isss = total * 0.04;
            afp = total * 0.0625;

            if (total >= 500){
                isr = total * 0.10;
            }
            else{
                isr = 0;
            }

            salario_real = total - isss - afp - isr; 
    //doy los datos
            cout<< endl;
            cout << "Descuento de Seguro Social: " << isss << endl;
            cout << "Descuento de AFP: " << afp <<endl;
            cout << "Descuento de Impuesto Sobre la Renta: " << isr << endl;
            cout << "El salario real con descuentos es: " << salario_real << endl;

        }
    }

//cierro el programa
    cout<< endl;
    cout << "El programa ha terminado."<< endl;
    system("PAUSE");
}