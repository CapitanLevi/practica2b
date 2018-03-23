/*Problema 3. Haga una función que compare 2 cadenas de caracteres y retorno un valor lógico verdadero si son
iguales y falso en caso contrario, no olvide también tener en cuenta la longitud de las cadenas. Escriba un programa
de prueba.
*/
#include <iostream>
//#include <string.h>
using namespace std;

void pedirDatos();
bool compararCadenas(char *,char *);
char cadena1[100],cadena2[100];

int main()
{
    pedirDatos();
    if(compararCadenas(cadena1,cadena2)==1)cout<<"Las cadenas son iguales."<<endl;
    else cout<<"Las cadenas son diferentes."<<endl;
    return 0;
}

void pedirDatos(){
    cout<<"Digite la primera cadena: ";
    cin.getline(cadena1,100,'\n');
    cout<<"Digite la segunda cadena: ";
    cin.getline(cadena2,100,'\n');
}
//Usando función strcmp
/*
bool compararCadenas(char *cadena1, char *cadena2){
    if(strcmp(cadena1,cadena2)==0)return true;
    else return false;
}
*/
//Usando bucle
bool compararCadenas(char *cadena1, char *cadena2){
    bool SonIguales=true;
    while((*cadena1)&&(*cadena2)){
        if(*cadena1!=*cadena2){
            SonIguales=false;
            break;
        }
        cadena1++,cadena2++;
    }
    return SonIguales;
}
