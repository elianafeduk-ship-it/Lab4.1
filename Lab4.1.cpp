#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int N, i;
    double S;

    cout << "N = "; cin >> N;

    // 1) while
    S = 0;
    i = 1;
    while (i <= N)
    {
        S += 1. / i + sqrt(1 + sin(i) * sin(i));
        i++;
    }
    cout << S << endl;

    // 2) do while
    S = 0;
    i = 1;
    do
    {
        S += 1. / i + sqrt(1 + sin(i) * sin(i));
        i++;
    } while (i <= N);
    cout << S << endl;

    // 3) for з i++
    S = 0;
    for (i = 1; i <= N; i++)
    {
        S += 1. / i + sqrt(1 + sin(i) * sin(i));
    }
    cout << S << endl;

    // 4) for з i--
    S = 0;
    for (i = N; i >= 1; i--)
    {
        S += 1. / i + sqrt(1 + sin(i) * sin(i));
    }
    cout << S << endl;

    return 0;
}
