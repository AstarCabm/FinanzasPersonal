#include "Gui.h"
#include <iostream>
#include <cstdlib> // para system()
#include <limits>  // numeric_limits
using namespace std;

Consola::Consola(){
}

int Consola::mostrar_menu(){
    int opt;
    while(true){ //dentro hay un break condicional
        system("cls");
        cout<<"<|  MENU FINANZAS  |>"<<endl;
        cout<<"1. Agregar Ingreso."<<endl;
        cout<<"2. Agregar Gasto."<<endl;
        cout<<"3. Mostrar Saldo."<<endl;
        cout<<"4. Historial"<<endl;
        cout<<"_____________________"<<endl;
        cout<<"Opcion: ";
        if(cin>>opt){ //si la lectura es valida
            if(opt >= 1 && opt <= 4){ //valida rango
                break;
            }else{
                cout<<"fuera del rango"<<endl;
            }
        }else{
            cout<<"Entrada invalida. Intente de nuevo"<<endl;
            cin.clear(); //limpia el error
        }
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //limpia el buffer completamente
    }
    return opt;
}