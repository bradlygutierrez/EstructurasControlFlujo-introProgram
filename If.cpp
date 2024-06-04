#include <iostream>
#include <cstdlib>
using namespace std;

void opTernario();
void bloques(); 

int main()
{    /* Aquí se encuentra el ejercicio final. Si se quiere visualizar cualquier función solo escribe
        opTernario(); o bloques(); Dependendiendo de cual quieras visualizar. 
    */
    float nota1, nota2, nota3, nota4, nota5, promedio; 
    cout<<"Ingrese la primera nota:  \n";
    cin>>nota1; 
    cout<<"Ingrese la segunda nota:  \n";
    cin>>nota2;
    cout<<"Ingrese la tercera nota:  \n";
    cin>>nota3;
    cout<<"Ingrese la cuarta  nota:  \n";
    cin>>nota4;
    cout<<"Ingrese la quinta nota:  \n";
    cin>>nota5;

    promedio = (nota1 + nota2 + nota3 + nota4 + nota5) / 5;

    if (promedio >= 60)
    {
        system("color 0A");
        cout<<"Su promedio es: " <<promedio<< " Y signifca aprobado" <<endl;
    } else{
        system("color 0C");
        cout<<"Su promedio es: " <<promedio<< " Y significa reprobado" <<endl;
    }
    

    return 0;
}

void opTernario(){ //Esta función contiene el codigo del ejemplo del operador ternario
    int edad; 
    cout<<"Ingrese su edad \n";
    cin>>edad; 
    edad>=18 ? cout<<"Es mayor de edad \n" : cout<<"Es menor de edad \n";
}

void bloques(){ //Esta función contiene el ejemplo de la programación por bloques
    int edad; 
    cout<<"Ingrese su edad \n";
    cin>>edad; 
    if(edad >= 18 ){
        cout<<"Es mayor de edad"<<endl;
    }else{
        cout<<"Es menor de edad"<<endl;
    }
}

