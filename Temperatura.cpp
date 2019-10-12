#include <iostream>
#include <math.h>
#include "Temperatura.h"
using namespace std;

Temperatura::Celzijus()
{

    int a;
    int sum;
    cout << "Unesite vrednost u Faranhajtima" << endl;
    cin >> a ;

        sum =(a - 32) * 5/9;

    cout << a << " Stepeni Faranhajta je " << sum << " Stepeni Celzijusa" << endl;

}

Temperatura::Farenhajt()
{

    int a;
    int sum;
    cout << "Unesite vrednost u Celzijusima" << endl;
    cin >> a ;

        sum =(a * 9/5) + 32;

    cout << a << " Stepeni Celzijusa je " << sum << " Stepeni Faranhajta" << endl;

}



