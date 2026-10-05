#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;

int main()
{
    double x, y;
    double R = 1;

    srand((unsigned)time(NULL));

    // Введення координат користувачем
    for (int i = 0; i < 10; i++)
    {
        cout << "x = ";
        cin >> x;

        cout << "y = ";
        cin >> y;

        if (
            // Нижня ліва частина кола
            (x <= 0 && y <= 0 && x * x + y * y <= R * R)

            ||

            // Верхня частина між параболою та колом
            (x >= 0 && y >= (x - 1) * (x - 1)
                && x * x + y * y <= R * R)
            )
            cout << "yes" << endl;
        else
            cout << "no" << endl;
    }

    cout << endl << fixed;

    // Випадкові координати у квадраті [-R; R]
    for (int i = 0; i < 10; i++)
    {
        x = 2.0 * R * rand() / RAND_MAX - R;
        y = 2.0 * R * rand() / RAND_MAX - R;

        if (
            (x <= 0 && y <= 0 && x * x + y * y <= R * R)

            ||

            (x >= 0 && y >= (x - 1) * (x - 1)
                && x * x + y * y <= R * R)
            )
        {
            cout << setw(8) << setprecision(4) << x << " "
                << setw(8) << setprecision(4) << y << " "
                << "yes" << endl;
        }
        else
        {
            cout << setw(8) << setprecision(4) << x << " "
                << setw(8) << setprecision(4) << y << " "
                << "no" << endl;
        }
    }

    return 0;
}

