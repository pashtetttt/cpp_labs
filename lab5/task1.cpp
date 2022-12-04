#include <iostream>
#include <vector>

using namespace std;

int analyze(int n, int mas[])
{
    int s = 0;
    int ns = 0;
    int ps = 0;
    int avg;
    int s1 = 0;
    int s2 = 0;
    int min = 1000;
    int max = -1000;
    int imax = 0;
    int imin = 0;
    for (int i = 0; i < n; i++)
    {
        s += mas[i];
        if (mas[i] < 0) ns += mas[i];
        else ps += mas[i];

        if (i % 2 == 0) s2 += mas[i];
        else s1 += mas[i];

        if (mas[i] > max) {max = mas[i]; imax = i;}
        if (mas[i] < min) {min = mas[i]; imin = i;}

    }
    int s_between = 0;
    if (imax < imin) {for (int j = imax; j < imin; j++) {s_between += mas[j];}}
    else {for (int i = imax; i < imin; i++) {s_between += mas[i];}}

    cout << "Сумма всех элементов массива: " << s << "\n";
    cout << "Сумма отрицательных элементов массива: " << ns << "\n";
    cout << "Сумма положительных элементов массива: " << ps << "\n";
    cout << "Сумма нечетных элементов массива: " << s1 << "\n";
    cout << "Сумма четных элементов массива: " << s2 << "\n";
    cout << "Максимальный элемент массива: " << max << "\n";
    cout << "Минимальный элемент массива: " << min << "\n";
    cout << "Сумма между максимальным и минимальным элементами: " << s_between << "\n";
}

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

    analyze(n, mas);
    int* nmas = sorting(n, mas);
    for (int i = 0; i < n; i++)
        cout << nmas[i] << '\t';
    return 0;
}