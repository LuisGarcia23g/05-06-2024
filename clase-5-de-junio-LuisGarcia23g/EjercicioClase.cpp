//Programa para calcular pension 
#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;

int main (){
    
int opcion=0, cotizando=0;
float pension=0, FactorIncremento=0, TasaIncremento=0;

cout << "Presione una de las opciones para saber su pension mensual\n";

do {
cout << "1. Pension para los optados \n";
cout << "2. Pensión para los afiliados del Sistema Público de Pensiones \n";
cout << "3. Pensión de los afiliados al Sistema privado (AFP)\n";
cout << "4. Salir\n";
cin >> opcion;
}
while (opcion != 1 && opcion != 2 && opcion != 3 && opcion != 4);

switch (opcion){
    
    case 1: 
    cout << "Escriba sus anos cotizando: ";
    cin >> cotizando;
//SBR 
for (int i=1; )


//FactorIncremento
FactorIncremento= pow(1+0.01, cotizando-10);


    break;
    
    case 2: 
    cout << "Escriba su pension: ";
    cin >> pension;
    
    break;
    
    case 3: 
    cout << "Escriba su pension: ";
    cin >> pension;
    
    break;
}

    return 0;
}