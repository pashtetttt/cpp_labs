#include <iostream>

using namespace std;


int trans_search(int kc, int (&a)[], int key)
{
    int index = -1;
    int buf = 0;
    for (int i = 0; i < kc; i++)
    {
        if (a[i] == key)
        {
            if (i == 0) {index = 0;}
            else
            {
                buf = a[i];
                a[i] = a[i-1];
                a[i-1] = buf;
                index = i;
            }
        }
    }
    return index;
}
int main()
{
    int a[] = {1, 2, 3, 4, 5, 6, 7, 2};
    int kc = sizeof(a) / sizeof(a[0]);
    cout << "Enter key : ";
    int key;
    cin >> key;
    int index = trans_search(kc, a, key);
    cout << "Индекс элемента: " << index << endl;
    cout << "Массив: " << endl;
    for (int i: a)
        cout << i << '\t';
    cout << endl;
}