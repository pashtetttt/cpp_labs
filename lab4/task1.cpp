#include <iostream>
#include <math.h>
#include <stdio.h>  

using namespace std;

int MyRoot(double, double, double, double&, double&);

int MyRoot(double a, double b, double c, double &x1, double &x2)
{
    double D = b * b - 4 * a * c;
    if (D > 0)
    {
        x1 = ((-1) * b + sqrt(D)) / (2 * a);
        x2 = x1 = ((-1) * b - sqrt(D)) / (2 * a);
        return 1;
    }
    else if (D == 0)
    {
        x1 = ((-1) * b + sqrt(D)) / (2 * a);
        x2 = ((-1) * b + sqrt(D)) / (2 * a);
        return 0;
    }
    else return -1;
}
int main()
{
    double a, b, c, x1, x2;
    cout << "Enter a,b,c," << endl;
    cin >> a >> b >> c;
    int result = MyRoot(a, b, c, x1, x2);
    if (result == 1)
    {
        printf("Корни уравнения х1 =%f, х2 =%f", x1, x2);
    }
    if (result == 0)
    {
        printf("Корень уравнения один х1 = х2 =%f", x1);
    }
    if (result == -1)
    {
        printf("Корней нет");
    }
    return 0;
}