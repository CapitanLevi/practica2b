/*Elabore un programa que permita hallar la intersección entre un par de rectángulos.
 * Represente los rectángulos como arreglos de 4 datos de la siguiente manera:
Los primeros 2 datos corresponden a las coordenadas de la esquina superior
izquierda del rectángulo (x,y).
Los siguientes 2 datos representan el ancho y la altura del rectángulo.
Implemente una función que reciba 2 arreglos que representen los rectángulos A y B,
y por referencia retorne un rectángulo C (con la misma estructura descrita anteriormente)
que corresponda a la intersección de A y B.
Si se ingresan los rectángulos A y B representados por los arreglos
{0, 0, 8, 4} y {5, 2, 6, 7}, el rectángulo intersección C debe ser el arreglo {5, 2, 3, 2}.
*/

#include <iostream>
using namespace std;
void pedirDatos(double&,double&,double&,double&,double&,double&,double&,double&);
bool validarInterseccion(double *,double *);

int main(){
    double X1=0,X2=0,X3=0,Y1=0,Y2=0,Y3=0,W1=0,W2=0,W3=0,H1=0,H2=0,H3=0;
    pedirDatos(X1,Y1,W1,H1,X2,Y2,W2,H2);
    double A[4]={X1,Y1,W1,H1},B[4]={X2,Y2,W2,H2}, C[4]={X3,Y3,W3,H3};
    if(!validarInterseccion(A,B)){
        cout<<"No hay intersección."<<endl;
        return 0;}

}

bool validarInterseccion(double *a, double *b){
    //Hay intersección sólo si el punto de B está dentro del gran rectángulo
    //  (X1 <  W1  +   W2) &&  (Y1  <   H1  +   H2)
    if((*a<(*(a+2)+*(b+2)))&&(*(a+1)<(*(a+3)+*(b+3)))){
        return true;}
    else return false;
}

void pedirDatos(double &x1, double &y1, double &w1, double &h1,
                double &x2, double &y2, double &w2, double &h2){
    cout<<"Ingrese los datos del rectángulo A:\n";
    cout<<"Coordenada X1: ";cin>>x1;
    cout<<"Coordenada Y1: ";cin>>y1;
    cout<<"Ancho W1: ";cin>>w1;
    cout<<"Altura H1: ";cin>>h1;
    cout<<"Ingrese los datos del rectángulo B:\n";
    cout<<"Coordenada X2: ";cin>>x2;
    cout<<"Coordenada Y2: ";cin>>y2;
    cout<<"Ancho W2: ";cin>>w2;
    cout<<"Altura H2: ";cin>>h2;
}
