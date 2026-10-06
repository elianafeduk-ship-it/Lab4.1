#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double P, S;
    int k, i;

    // 1 спосіб: while - while
    P = 1;
    k = 1;

    while (k <= 15)
    {
        S = 0;
        i = 1;

        while (i <= k)
        {
            S += i + 1;
            i++;
        }

        P *= sqrt(1 + S * S) / (1 + S);
        k++;
    }

    cout << P << endl;


    // 2 спосіб: do-while - do-while
    P = 1;
    k = 1;

    do
    {
        S = 0;
        i = 1;

        do
        {
            S += i + 1;
            i++;
        } while (i <= k);

        P *= sqrt(1 + S * S) / (1 + S);
        k++;
    } while (k <= 15);

    cout << P << endl;


    // 3 спосіб: for - for
    P = 1;

    for (k = 1; k <= 15; k++)
    {
        S = 0;

        for (i = 1; i <= k; i++)
        {
            S += i + 1;
        }

        P *= sqrt(1 + S * S) / (1 + S);
    }

    cout << P << endl;


    // 4 спосіб: for - for у зворотному напрямку
    P = 1;

    for (k = 15; k >= 1; k--)
    {
        S = 0;

        for (i = k; i >= 1; i--)
        {
            S += i + 1;
        }

        P *= sqrt(1 + S * S) / (1 + S);
    }

    cout << P << endl;

    return 0;
}
