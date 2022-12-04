#include <iostream>
#include <math.h>
using namespace std;

struct Equation
{
    double x1;
    double x2;

    void Show()
    {
        cout << "First root: " << x1 << endl;
        cout << "Second root: " << x2 << endl;
    }
};

Equation Solve(int a, int b, int c)
{
    Equation e;
    double D = b * b - 4 * a * c;
    if (D > 0)
    {
        e.x1 = ((-1) * b + sqrt(D)) / (2 * a);
        e.x2 = ((-1) * b - sqrt(D)) / (2 * a);
        return e;
    }
    else if (D == 0)
    {
        e.x1 = ((-1) * b + sqrt(D)) / (2 * a);
        e.x2 = ((-1) * b + sqrt(D)) / (2 * a);
        return e;
    }
    else 
    {
        e.x1 = -1;
        e.x2 = -1;
        return e;
    }
}

int main()
{
    Equation e = Solve(1, 3, 1);
    e.Show();
}