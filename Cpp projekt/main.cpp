#include <iostream>
#include "czytaj.h"

#include <stdio.h>//switch
#include <cstdlib>//switch
#include <conio.h>//switch

using namespace std;

char wybor;

int main()
{
for(;;)
{
///////////////////////////////////////////////////////
    cout<<endl;
    cout << "MENU GLOWNE" << endl;
    cout << "-----------------" << endl;
    cout << "1. Odczyt" << endl;
    cout << "2. Zastap wszystko(1wyraz)" << endl;
    cout << "3. Dodaj na koncu (1wyraz)" << endl;
    cout << "4. Zamknij program" << endl;
    cout << "-----------------" << endl;
    cout << "Wybierz: ";

////////////////////////////////////////////////////////

    cout << endl;
    wybor=getch();
    switch(wybor)
{
    case '1':
           {
                Czytaj cz1;
                cz1.wczytaj();
           }
    break;

    case '2':
            {
                Czytaj cz2;
                cz2.z_wsz();
            }

    break;
    case '3':
           {
                Czytaj cz3;
                cz3.dodaj();
           }
    break;
    case '4':
            exit(0);
    break;

    default: cout<<"Nie ma takiej opcji w menu!";
    }
    getchar();getchar();
    system("cls");
}
    return 0;
}
