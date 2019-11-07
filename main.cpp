#include <iostream>
#include <stdlib.h>
#include <math.h>
#include "Temperatura.h"
#include "Duzina.h"
#include "Povrsina.h"
#include "Brzina.h"

using namespace std;



int main()
{
 int b;

 do {
 cout << "Odaberite konverziju:" << endl;
 cout << "   1. Temperature" << endl;
 cout << "   2. Duzine" << endl;
 cout << "   3. Povrsine" << endl;
 cout << "   4. Brzine" << endl;
 cout << "   5. Izlaz" << endl;
 cout << "Unesite redni broj" << endl;
 cin >> b;

 if(b>5 || b<1){

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
        int p;
        cout << "  1. Metri u metre kvadratne" << endl;
        cout << "  2. Metri kvadratni u hektare" << endl;
        cin >> p;
            switch(p) {
                case 1:
                Povrsina K;
                K.Kvadrata();
                break;
                case 2:
                Povrsina H;
                H.Hektara();
        }
        break;
    case 4:
        int b;
        cout << "  1. Km/h u Mp/h" << endl;
        cin >> b;
            switch(b){
            case 1:
            Brzina M;
            M.Milje();
            break;

        }
        break;
    case 5:
        break;
    }
 }
 while(b!=5);

return 0;

}

