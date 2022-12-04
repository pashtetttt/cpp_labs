#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str[4];
    for (int i = 0; i < 4; i++)
    {
        getline(cin, str[i]);
    }

    for (int i = 0; i < 4; i++)
    {
        cout << str[i]; 
    }

    ofstream out("test", ios::out | ios::binary);
    if (!out) {
        cout << "Файл открыть невозможно\n";
        return 1;
    }
    out.write((string *) str, sizeof(str));
    out.close();
}