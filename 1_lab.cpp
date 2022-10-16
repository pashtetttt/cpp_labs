#include <iostream>
#include <string>
#include<cmath>
using namespace std;

int main()
{
    
    system("chcp 1251");
    int x1, x2, x3, x4, x5;
    int y1, y2, y3, y4, y5;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4 >> x5 >> y5;
    double s = 0.5 * abs(x1*y2 + x2*y3 + x3*y4 + x4*y5 + x5*y1 - y1*x2 - y2*x3 - y3*x4 - y4*x5 - y5*x1);
    cout << "Площадь равна: " << s << endl;
    return 0;
}
