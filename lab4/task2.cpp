#include <iostream>

using namespace std;

bool Input(int &a, int &b)
{
    cin >> a >> b;
    if (a > 1000 || a == b || b < 0) return false;
    else return true;
}

int main()
{
    int a, b;
    if(Input(a,b)== false) // if(!Input(a,b))
    {
        cerr << "error" << endl;
        return 1;
    }
    int s = a + b;
    cout << s << endl;
    return 0;
}