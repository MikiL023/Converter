#include <iostream>
#include <math.h>
#include "Duzina.h"

using namespace std;

Duzina::Metri()
{
    cout << "Unesite vrednost u milimetrima" << endl;
    cin >> m ;

        sum = (m / 1000);

    cout << m << " milimetra je " << sum << " metara" << endl;

    return sum;
}

Duzina::Milimetri()
{
    cout << "Unesite vrednost u metrima" << endl;
    cin >> m ;

        sum = (m * 1000);

    cout << m << " metara je " << sum << " milimetara" << endl;

   return sum;
}
