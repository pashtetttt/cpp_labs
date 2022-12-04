#include <iostream>

using namespace std;

int* sorting(int n, int mas[])
{
    int min = 0;
    int buf = 0;
    for (int i = 0; i < n; i++)
    {
        min = i;
        for (int j = i + 1; j < n; i++)
        {
            min = (mas[j] < mas[min]) ? j : min;
        }
        if (i != min)
        {
            buf = mas[i];
            mas[i] = mas[min];
            mas[min] = buf;
        }
    }
    return mas;
}
int main()
{
    const int n = 10;
    int mas[n];

    for (int i = 0; i < n; i++)
    {
        cin >> mas[i];
    }

    int* nmas = sorting(n, mas);
    
    ofstream out("test", ios::out | ios::binary);
    if (!out) {
        cout << "Файл открыть невозможно\n";
        return 1;
    }
    out.write((char *) nmas, sizeof(nmas));
    out.close();

    return 0;
}
