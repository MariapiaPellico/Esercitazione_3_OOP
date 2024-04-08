#include "src/ComplexNumber.hpp"
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    //Stampa di numeri complessi
    ComplexNumberLibrary::ComplexNumber c1(1,2);
    ComplexNumberLibrary::ComplexNumber c2(1,-2);
    cout << "c1: " << c1 << endl;
    cout << "c2: " << c2 << endl;

    //Somma di numeri complessi
    ComplexNumberLibrary::ComplexNumber sum = c1+c2;
    cout << "Sum: " << sum << endl;

    //Confronto di numeri complessi
    if (c1 == c2)
       cout << "c1 e c2 sono uguali" << endl;
    else
       cout << "c1 e c2 non sono uguali" << endl;

    //Coniugato
    ComplexNumberLibrary::ComplexNumber c1Conjugate = c1.to_conjugate();
    ComplexNumberLibrary::ComplexNumber c2Conjugate = c2.to_conjugate();
    cout << "Coniugato di c1: " << c1Conjugate << endl;
    cout << "Coniugato di c2: " << c2Conjugate << endl;

}
