#include <iostream>
#include <math.h>
#include "Povrsina.h"

using namespace std;

Povrsina::Kvadrata()
{

    cout << "Unesite duzinu u metrima" << endl;
    cin >> d;
    cout << "Unesite sirinu u metrima" << endl;
    cin >> s;

    sum = d * s;

    cout << "Povrsina je " << sum << " metara kvadratnih" << endl;

    return sum;
}


Povrsina::Hektara()
{

    cout << "Unesite duzinu u metrima" << endl;
    cin >> d;
    cout << "Unesite sirinu u metrima" << endl;
    cin >> s;

    sum = (d * s) / 10000;

    cout << "Povrsina je " << sum << " hektara" << endl;

    return sum;

}
