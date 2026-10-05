#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    double x, xp, xk, dx, y;

    cout << "xp = "; cin >> xp;
    cout << "xk = "; cin >> xk;
    cout << "dx = "; cin >> dx;

    cout << fixed;
    cout << "---------------------------" << endl;
    cout << "|" << setw(5) << "x" << " |"
        << setw(7) << "y" << " |" << endl;
    cout << "---------------------------" << endl;

    x = xp;

    while (x <= xk)
    {
        if (x <= 1)
            y = 1. / x + 4 + 8 + 0.65 * x;
        else
            if (x <= 5)
                y = 1. / x + 4 + log(x) +
                cos((6.1 + x) / 2) / sin((6.1 + x) / 2);
            else
                y = 1. / x + 4 + sqrt(x + sqrt(2));

        cout << "|" << setw(7) << setprecision(2) << x
            << " |" << setw(10) << setprecision(3) << y
            << " |" << endl;

        x += dx;
    }

    cout << "---------------------------" << endl;

    return 0;
}
