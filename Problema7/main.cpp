/*Escriba un programa que reciba una cadena de caracteres
 * y elimine los caracteres repetidos.
Ejemplo: se recibe bananas debe mostrar bans.
Nota: la salida del programa debe ser: Original: bananas. Sin repetidos: bans.
*/

#include <iostream>
#include <string.h>
#include <stdlib.h> //for new and delete[]
using namespace std;
char cadena[30]; //Asumiendo que el usuario no tiene tanto espíritu para copiar una frase completa.
int longCadena,*posiciones;

void pedirCadena();
void mostrarCadenaSinRepetidos(char *, int *);
void mostrarResultados();

int main()
{
    pedirCadena();
    mostrarResultados();
    delete[] posiciones;
    return 0;
}

void pedirCadena(){
    cout<<"Digite una cadena de caracteres: ";
    cin.getline(cadena,30,'\n');
    longCadena=strlen(cadena);
    posiciones=new int[longCadena-1];
    //Formateando el vector de posiciones para eliminar basura.
    for(int i=0;i<longCadena-1;i++){
        posiciones[i]=longCadena;
    }
}

void mostrarCadenaSinRepetidos(char *cadena, int *posiciones){
    char iElemento, jElemento;
    bool iExists;
    for(int i=0, k=0;i<longCadena;i++){
        iElemento=*(cadena+i);
        iExists=false;
        //Preguntar si iElemento es uno de los caracteres repetidos.
        //Es decir, si i está en el vector que guarda las posiciones.
        for(int m=0;m<longCadena-1;m++){
            if(i==*(posiciones+m)){
                iExists=true;}
        }
        if(iExists){
            continue;}
        //Imprimir el último caracter de la cadena.
        if (i==longCadena-1){
            cout<<iElemento;
            break;}
        for(int j=i+1;j<longCadena;j++){
            jElemento=*(cadena+j);
            //Guardar la posición de jElemento cuando sean iguales.
            if(iElemento==jElemento){
                *(posiciones+k)=j;
                k++;
            }
            //Imprimir iElemento cuando j recorra toda la cadena.
            if(j==longCadena-1){
                cout<<iElemento;}
        }
    }
}

void mostrarResultados(){
    cout << "Original: " << cadena << endl;
    cout << "Sin repetidos: ";
    mostrarCadenaSinRepetidos(cadena,posiciones);
    cout<<'\n';
}
