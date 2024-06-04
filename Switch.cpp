#include <iostream>
using namespace std;

void sumar(){
    int a, b;
    printf("Ingrese dos numeros\n");
    printf("Primer numero: ");
    scanf("%d", &a);
    printf("Segundo numero: ");
    scanf("%d", &b);
    printf("La suma es: %d\n", a + b);
}

void restar(){
    int a, b;
    printf("Ingrese dos numeros\n");
    printf("Primer numero: ");
    scanf("%d", &a);
    printf("Segundo numero: ");
    scanf("%d", &b);
    printf("La resta es: %d\n", a - b);
}

void multiplicar(){
    int a, b;
    printf("Ingrese dos numeros\n");
    printf("Primer numero: ");
    scanf("%d", &a);
    printf("Segundo numero: ");
    scanf("%d", &b);
    printf("La multiplicacion es: %d\n", a * b);
}
void dividir(){
    int a, b;
    printf("Ingrese dos numeros\n");
    printf("Primer numero: ");
    scanf("%d", &a);
    printf("Segundo numero: ");
    scanf("%d", &b);
    printf("La division es: %d\n", a / b);
}

void salir(){
    printf("Adios\n");
}

int main(int argc, char const *argv[])
{
    printf("Seleccione una opcion: \n");
    printf("1. Sumar\n");
    printf("2. Restar\n");
    printf("3. Multiplicar\n");
    printf("4. Dividir\n");
    printf("5. Salir\n");

    int op;
    printf("Opcion: ");
    scanf("%d", &op);

    switch (op)
    {
    case 1:
        sumar();
        break;
    case 2:
        restar();
        break;
    case 3: 
        multiplicar();
        break;
    case 4: 
        dividir();
        break;
    case 5: 
        salir();
        break;
    default:    
        printf("Opcion no valida\n");
        break;
    }

}


































