#include <iostream>
using namespace std;

int main(){
   int numero, temporal;
   int total_de_horas=0;
   int apps_mas_5horas=0;
   int contador_de_apps=0;

    do{
        cout<<"ingrese un numero entero (positivo):";
    cin>>numero;

    if(numero<=0){ cout<<"Datos invalidos vuelva a intentar:"<<endl;}

    }
        while (numero<=0);

    temporal=numero;

    while(temporal>0){
        int horasapp=temporal%10;
        total_de_horas+=horasapp;
        contador_de_apps=contador_de_apps+ 1;

        if(horasapp>5){apps_mas_5horas+=1;}

        temporal=temporal/10;
    }
    float promedio=(float)total_de_horas/contador_de_apps;


    cout<<"---Resultados del analisis:---\n"<<endl;
    cout<<"Total de horas utilizadas."<<total_de_horas<<endl;
    cout<<"cantidad de apps mas de cinco horas:"<<apps_mas_5horas<<endl;
    cout << "Promedio de horas por aplicacion: " << promedio << endl;


    return 0;
}
