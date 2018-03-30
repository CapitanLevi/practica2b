/*Problema 11. Escriba un programa que permita manejar las reservas de asientos en una sala de cine, los asientos de
la sala de cine están organizados en 15 filas con 20 asientos cada una. El programa debe mostrar una representación
de la sala que indique que asientos están disponibles y cuales se encuentran reservados. Además debe permitir
realizar reservas o cancelaciones al ingresar la fila (letras A-O) y el número del asiento (números 1-20).
Nota: un ejemplo de visualización de una sección de la sala es el siguiente:
*/
/*

*/

#include <iostream>
#include <string.h> // para strupr()
#include <stdlib.h>
using namespace std;
void mostrarAsientos();
void formatearMatriz();
void pedirDatos();
void modificarMatriz();

char asientos[15][20];
unsigned int fila,columna;

int main()
{
    formatearMatriz();
    mostrarAsientos();
    while (true) {
        pedirDatos();
        modificarMatriz();
        mostrarAsientos();
    }
    return 0;
}

void modificarMatriz(){
    if(*(*(asientos+fila)+columna)=='-'){
        *(*(asientos+fila)+columna)='+';}
    else if(*(*(asientos+fila)+columna)=='+'){
        *(*(asientos+fila)+columna)='-';}
}

void mostrarAsientos(){
    cout<<"   ";
    for(int i=1;i<=9;i++)cout<<i<<"  ";
    for(int i=10;i<=20;i++)cout<<i<<' ';
    cout<<'\n';
    char c='A';
    for(int i=0;i<15;i++){
        cout<<c++<<' ';
        for(int j=0;j<20;j++){
            //cout<<"|"<<*(*(asientos+i)+j);
            cout<<"|"<<asientos[i][j]<<' ';
        }
    cout<<"|\n";
    }
}


void formatearMatriz(){
    for(int i=0;i<15;i++){
        for(int j=0;j<20;j++){
            asientos[i][j]='-';
        }
    }
}

void pedirDatos(){
    char filaTemp;
    cout<<"\nIngrese la fila (A-O): ";
    cin>>filaTemp;
    if((filaTemp>=97)&&(filaTemp<=111)){
        filaTemp-=32; //paso a mayúscula.
    }
    fila=filaTemp-'A';
    cout<<"Ingrese el asiento (1-20): ";
    cin>>columna;
    columna--;
    cout<<'\n';
}


/*

*/
