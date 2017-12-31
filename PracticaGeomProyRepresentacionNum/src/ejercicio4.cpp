#include <ejercicio4.h>
#include <common.h>
#include <iostream>
using namespace std;


void resuelveEjercicio4() {
    const float MINUS_ONE_F = -1;
    const int ZERO = 0;

    cout << endl << endl << endl << "Ejercicio 4:" << endl;
    cout << "  A ====================================================================================== " << endl;
    {
        double sqrtA = sqrt(MINUS_ONE_F);
        printf("\tRaiz de -1: %f\n", sqrtA);
    }

    cout << "  B ====================================================================================== " << endl;
    {
        printf("\t0(int)/0(int): Excepcion\n");//(zero / zero) << endl;
        printf("\t0(int)/0.0f: %f\n", ZERO / (float)ZERO);
    }

    cout << "  C ====================================================================================== " << endl;
    {
        printf("\t1.0f/0f: %f\n", 1.0f / (float)ZERO);
    }

    cout << "  D ====================================================================================== " << endl;
    {
        float point2 = 0.2f;
        printf("\tPrecision de 16 cifras: %1.16f\n", point2);
    }
    
    cout << "  E ====================================================================================== " << endl;
    {
        cout << "\tObservo que en los decimales mas pequeños hay una imprecision importante" << endl;
        cout << "\tEsto se debe a que las fracciones que manejan los decimales en coma flotante" << endl;
        cout << "\ttienen una limitacion de la fraccion más pequeña que pueden manejar" << endl;
        cout << "\tEn concreto 0.2 no puede ser expresado de manera exacta como suma de fracciones de la forma 1/(n^2)" << endl;
    }

    {
        float f = 0.1f;
        float sum = 0;
        for (int i = 0; i < 100; ++i) {
            sum += f;
        }
        float product = f * 100;
        cout << "  F ====================================================================================== " << endl;
        {
            printf("\tsum: %f\n", sum);
            printf("\tproduct: %f\n", product);
        }

        cout << "  G ====================================================================================== " << endl;
        {
            printf("\tSum con Precision de 15 cifras: %1.15f\n", sum);
            printf("\tProduct con Precision de 15 cifras: %1.15f\n", product);
        }

        cout << "  H ====================================================================================== " << endl;
        {
            cout << "\tEl minimo numero representable por la mantisa es 0'00000011920928955078125 (1/(2^23))" << endl;
            cout << "\tPor lo tanto sabemos que como minimo las 7 primeras cifras han de ser iguales" << endl;
            cout << "\ten el caso de la suma y el producto, podemos comprobar que las dos cifras enteras" << endl;
            cout << "\ty los siguientes 5 decimales son iguales." << endl;
            cout << "\tTambien se puede comprobar restando ambos numeros y fijado un epsilon, comprobar si el" << endl;
            cout << "\tresultado es menor que ese epsilon." << endl;
            cout << "\tPor último se puede ver el error relativo entre los dos numeros el resultado debe ser" << endl;
            cout << "\tmenorque un error fijado, por ejemplo 0.00001" << endl;
        }
    }

}