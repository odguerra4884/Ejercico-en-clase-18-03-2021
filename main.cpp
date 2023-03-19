#include<stdio.h>
#include<conio.h>
/*int main()
{
    int fac=0;
    printf("Ingresa numero para calcular el factorial ");
    scanf("%d",&fac);
    int temp=fac-1;
    int r=fac;
    while (temp>=1)
    {
        r=r*temp;
        temp--;
    }

    printf("El factorial de %d es: %d ", fac,r);
    getch();
}*/



/*
#include <iostream>
using namespace std;
const string INFO = "Este programa imprime la sucesion de fibonacci desde \
1 hasta , \nsiendo este ultimo un numero ingresado por el usuario\n";
int main() {
    unsigned long long aux = 1, fib = 0, lim, init;
    cout << INFO << endl;
    cout << "Ingrese un numero para la sucesion de fibonacci: ";
    cin >> lim;
    if(lim > 0) {
        for(init = 1; init <= lim; init++) {
            cout << "[" << fib << "] ";
            aux += fib; // lo mismo que aux =  aux + fib;
            fib = aux - fib;
        }
    } else {
        cout << "El numero debe ser mayor a cero!!" << endl;
    }
    cout << "\n";
    return 0;
}
*/


/*
#include <iostream>

bool esPrimo(int numero);

int main() {
    int numero;
    std::cout << "Escribe un número y te diré si es primo:\n";
    std::cin >> numero;
    if (esPrimo(numero)) {
        std::cout << "Es primo";
    } else {
        std::cout << "NO es primo";
    }
}

bool esPrimo(int numero) {

    if (numero == 0 || numero == 1 || numero == 4) return false;
    for (int x = 2; x < numero / 2; x++) {
        if (numero % x == 0) return false;
    }

    return true;
}

*/

/*
#include <iostream>

#include <cstdlib>



using namespace std;

int numero;



int main(){

    div_t resultado;

    cout << "Ingrese un numero para verificar si es par" << endl;

    cin >> numero;


    resultado=div(numero,2);

    if (resultado.rem>0)

    {

        cout << numero << " es impar" << endl;

    }

    else {

        cout << numero << " es par" << endl;

    }



    cin.get();

    cin.ignore();

    return 0;

}*/

/*
#include <iostream>
using namespace std;
void tabla(int);
int main(int argc, char *argv[]) {
    int opcion;
    bool repetir = true;
    do{
        system("cls");
        cout << "\n Menu TABLA DE MULTIPLICAR" << endl;
        cout << "[1] Tabla 1" << endl;
        cout << "[2] Tabla 2" << endl;
        cout << "[3] Tabla 3" << endl;
        cout << "[5] Tabla 4" << endl;
        cout << "[6] Tabla 5" << endl;
        cout << "[7] Tabla 6" << endl;
        cout << "[8] Tabla 7" << endl;
        cout << "[9] Tabla 8" << endl;
        cout << "[10] Tabla 9" << endl;
        cout << "[0] SALIR" << endl;

        cout << "\nIngrese una opcion: ";
        cin >> opcion;
        switch (opcion) {
            case 1: tabla(1);   break;
            case 2: tabla(2);	break;
            case 3: tabla(3);   break;
            case 4: tabla(4);	break;
            case 5: tabla(5);	break;
            case 6: tabla(6);	break;
            case 7: tabla(7);	break;
            case 8: tabla(8);	break;
            case 9: tabla(9);	break;
            case 10: tabla(10);	break;
            case 0:	repetir = false;
                break;
        }
    }while(repetir);
    return 0;
}
void tabla(int tabla){
    system("cls");
    cout<<"TABLA DEL  "<< tabla <<endl;
    for(int i=1; i<=10; i++){
        cout<< tabla <<" * "<< i <<" = "<< tabla * i <<endl;
    }
    system("pause>nul");
}
*/
