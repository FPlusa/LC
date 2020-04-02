#include <iostream>
#include <fstream>
#include "Czytaj.h"
#include <cstdlib>

using namespace std;


void Czytaj::wczytaj()
    {
        fstream plik;
        plik.open("tekst.txt", ios::in);

        if(plik.good()==false)
        {
            cout<<"Nie udalo sie otworzyc pliku";
            exit(0);
        }

    string linia;
    int nr_linii=0;

    while(getline(plik,linia))
        {
            nr_linii++;
            cout<<nr_linii<<". "<<linia<<endl;
        }
plik.close();
    }



void Czytaj::show()
{
  cout<<endl<<tresc<<endl;
}
