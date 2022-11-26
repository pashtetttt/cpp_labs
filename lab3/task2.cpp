#include <iostream>
#include <string>
#include <array>
#include <stdio.h>  
#include <math.h>

using namespace std;

float cube1(int a)
{
    return pow(a, 1.0 / 3);
}

float cube2(int x)
{
    int i;
    float y, y1;
     
    y = x;
    do {
        y1 = y;
        y = (1/3) *(x/(y*y) + 2*y);
    }
    while (abs(y-y1)>1/100000);
    
    return y;
}
int main()
{
    cout << cube1(27) << endl;
    cout << cube2(27) << endl;
}