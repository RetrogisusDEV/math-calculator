#include <iostream>
#include <stdlib.h>
#include <string>
#include <math.h>

#include "tp.cpp"
#include "fa.cpp"
using namespace std;

void welcome()
{
    cout << "\n"
         << "::::::Welcome to Match IA::::::"
         << "\n"
         << "Created by : Retrogisus"
         << "\n";
}

int choice()
{
    int select;

    cout << "::::::Select operation::::::"
         << "\n"
         << "\n";
    cout << "1-Teorema de Pitágoras;"
         << "\n"
         << "2-Funcion afin"
         << "\n";
    cout << "Select : ";
    cin >> select;

    while (cin.fail() || select > 2)
    {
        cout << "Ese número no está asociado a una opción!!!"
             << "\n";
        cin.clear();
        cin.ignore(100, '\n');

        cout << "\n"
             << "seleccione (0 - 2): ";
        cin >> select;
    }
    switch (select)
    {
    case 1:
        TP();
        break;

    case 2:
        FA();
        break;
    }

    return 0;
}

int main()
{
    welcome();
    choice();
    main();
    return 0;
}
