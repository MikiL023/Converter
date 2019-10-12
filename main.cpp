#include <iostream>
#include <stdlib.h>
#include <math.h>
#include "Temperatura.h"
#include "Duzina.h"
using namespace std;



int main()
{
 int b;

 do {
 cout << "Odaberite konverziju:" << endl;
 cout << "   1. Temperature" << endl;
 cout << "   2. Duzine" << endl;
 cout << "   3. Izlaz" << endl;
 cout << "Unesite redni broj" << endl;
 cin >> b;

 if(b>3 || b<1){

    cout << "Uneli ste pogresan broj!" << endl;
 }

system("CLS");  //Ciscenje konzole

    switch(b){
    case 1:
        int t;
        cout << "   1. Celzijuse U Faranhajte" << endl;
        cout << "   2. Faranhajti u Celzijuse" << endl;
        cin >> t;
            switch(t){
                case 1:
                Temperatura Far;
                Far.Farenhajt();
                break;
                case 2:
                Temperatura Cel;
                Cel.Celzijus();
        }
        break;
    case 2:
        int d;
        cout << "   1. Milimetri u metre" << endl;
        cout << "   2. Metri u milimetrima" << endl;
        cin >> d;
            switch(d){
                case 1:
                Duzina M;
                M.Metri();
                break;
                case 2:
                Duzina Mm;
                Mm.Milimetri();
        }
        break;

    case 3:
        break;
    }
 }
 while(b!=3);

return 0;

}

