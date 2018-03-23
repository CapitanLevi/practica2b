/*Escriba un programa que reciba una cadena de caracteres y elimine los caracteres repetidos.
Ejemplo: se recibe bananas debe mostrar bans.
Nota: la salida del programa debe ser: Original: bananas. Sin repetidos: bans.
*/

#include <iostream>
#include <string.h>
using namespace std;
char cadena[30];
void cadenaSinRepetidos(char *);

int main()
{
    cout<<"Digite una cadena de caracteres: ";
    cin.getline(cadena,30,'\n');
    cout << cadena << endl;
    cadenaSinRepetidos(cadena);
    cout<<'\n';
    return 0;
}


void cadenaSinRepetidos(char *cadena){
    int longCadena=strlen(cadena);
    char iElemento, jElemento;
    for(int i=0;i<longCadena;i++){
        iElemento=*(cadena+i);
        for(int j=i+1;j<longCadena;j++){
            jElemento=*(cadena+j);
            if((iElemento!=jElemento)&&(j==longCadena-1)){
                cout<<*(cadena+i);}
            else if(iElemento==jElemento){
                break;}
        }
    }
}

/*
void guardarPosiciones(char *cadena){
    int longCadena=strlen(cadena);
    int posiciones[longCadena];
    int k=0;
    char iElemento, jElemento;
    bool PrimeraLetra=true;
    for(int i=0;i<longCadena;i++){
        for(int j=i+1;j<longCadena;j++){
            iElemento=*(cadena+i);jElemento=*(cadena+j);
            if(iElemento==jElemento){
                if(PrimeraLetra==true)posiciones[k]=i;PrimeraLetra=false;
                posiciones[++k]=j;
                k++;
            }
        }
    }
}
*/
