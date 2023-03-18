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
            aux += fib; /* lo mismo que aux =  aux + fib; */
            fib = aux - fib;
        }
    } else {
        cout << "El numero debe ser mayor a cero!!" << endl;
    }
    cout << "\n";
    return 0;
}*/



/*
#include <iostream>
(int numero);

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
    // Si no se pudo dividir por ninguno de los de arriba, sí es primo
    return true;
}*/


