#include <iostream>
#include <math.h>

using namespace std;

void TP()
{
    float A;
    float B;
    float C;
    float al;
    float bl;
    float cl;
    int TPselect;
    cout << "Define CATETO A : ";
    cin >> A;
    cout << "Define CATETO B : ";
    cin >> B;
    cout << "Define hipotenusa C : ";
    cin >> C;
    cout << "::::operación a realizar?::::"
         << "\n"
         << "1-Resolver hipotenusa"
         << "\n"
         << "2-Resolver CATETO A-B"
         << "\n"
         << "select : ";

    cin >> TPselect;
    while (cin.fail() || TPselect > 2)
    {
        cout << "Ese número no está asociado a una opción!!!"
             << "\n";
        cin.clear();
        cin.ignore(100, '\n');

        cout << "\n"
             << "seleccione (1 - 2): ";
        cin >> TPselect;
    }


    switch (TPselect)
    {
    case 1:
        cout << "1::Resolver Hipotenusa"
             << "\n";
        al = A;
        bl = B;
        cl = C;
        A = A * A;
        B = B * B;
        cout << "Procesando... \n";
        cout << "match : " << al << "²+" << bl << "²"
             << "\n";
        cout << "match : " << A << "+" << B << "\n";
        C = A + B;
        cout << "match : √" << C << " = " << A << "+" << B << "\n";
        C = sqrt(C);
        cout << "Resultado : H = " << C;
        break;
    case 2:
        cout << "2::Resolver CATETO A";
        break;
    }
    cin >> TPselect;
