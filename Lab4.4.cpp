#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    double x, xp, xk, dx, y;

    cout << "xp = ";
    cin >> xp;

    cout << "xk = ";
    cin >> xk;

    cout << "dx = ";
    cin >> dx;

    cout << endl;
    cout << "--------------------------------" << endl;
    cout << "|       Таблиця значень         |" << endl;
    cout << "--------------------------------" << endl;
    cout << "|" << setw(8) << "x"
        << " |" << setw(10) << "y" << " |" << endl;
    cout << "--------------------------------" << endl;

    x = xp;

    while (x <= xk)
    {
        if (-7 <= x && x <= -3)
            y = x + 7;
        else
            if (-3 < x && x <= -2)
                y = 4;
            else
                if (-2 < x && x <= 0)
                    y = x * x;
                else
                    if (0 < x && x <= 2)
                        y = x * x;
                    else
                        if (2 < x && x <= 4)
                            y = -2 * x + 8;
                        else
                            y = 0;

        cout << "|" << setw(8) << fixed << setprecision(2) << x
            << " |" << setw(10) << setprecision(3) << y
            << " |" << endl;

        x += dx;
    }

    cout << "--------------------------------" << endl;

    cin.get();
    cin.get();

    return 0;
}
