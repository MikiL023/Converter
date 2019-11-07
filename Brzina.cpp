#include "Brzina.h"
#include <iostream>
#include <math.h>

using namespace std;

Brzina::Milje()
{
    cout << "Unesite brzinu u Km/h" << endl;
    cin >> Km;

    sum = Km / 1.609344;

    cout << Km << "Km/h je " << sum << " Mp/h" << endl;
}
