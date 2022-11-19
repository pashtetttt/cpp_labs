#include <iostream>
#include <math.h>
using namespace std;

// Размен монет

int main()
{
    int money;
    cin >> money;
    int a1 = 1;
    int a2 = 2;
    int a3 = 5;
    int a4 = 10;
    int a5 = 50;
    int count = 0;
    if (money >= a5){
        int n = money / a5;
        money = money - a5 * n;
        count += n;
    }
        if (money >= a4){
        int n = money / a4;
        money = money - a4 * n;
        count += n;
    }
        if (money >= a3){
        int n = money / a3;
        money = money - a3 * n;
        count += n;
    }
        if (money >= a2){
        int n = money / a2;
        money = money - a2 * n;
        count += n;
    }
        if (money >= a1){
        int n = money / a1;
        money = money - a1 * n;
        count += n;
    }
    cout << count << endl;
    return 0;
}