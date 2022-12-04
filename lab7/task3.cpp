#include <iostream>
#include <string>
#include <tuple>
#include <vector>
#include <math.h>

using namespace std;

using Tuple = tuple<double, double, int>;

void printTupleOfThree(Tuple t)
{
    cout << "("
        << get<0>(t) << ", "
        << get<1>(t) << ", "
        << get<2>(t) << ")" << endl;
}

Tuple SolveEq(int a, int b, int c)
{
    double D = b * b - 4 * a * c;
    double x1, x2;
    int status;
    if (D > 0)
    {
        x1 = ((-1) * b + sqrt(D)) / (2 * a);
        x2 = x1 = ((-1) * b - sqrt(D)) / (2 * a);
        status = 1;
    }
    else if (D == 0)
    {
        x1 = ((-1) * b + sqrt(D)) / (2 * a);
        x2 = ((-1) * b + sqrt(D)) / (2 * a);
        status = 0;
    }
    else status = -1;
    return make_tuple(x1, x2, status);
}

int main()
{
    int a = 1;
    int b = 3;
    int c = 1;
    auto t = SolveEq(a, b, c);
    printTupleOfThree(t);
}