#include <iostream>
#include <math.h>
using namespace std;

int prime(int n){
    for (int i=2; i <= n/2; i++)
        if (n%i == 0) return 0;
    return 1;
}
int main()
{
    int a;
    cin >> a;
    if (!prime(a)){
        cout << "Not even a prime!" << endl;
    }
    else {
        int k = 0;
        for (int i = 2; i <= a; i++){
            if (prime(i)){
                k++;
            }
        }
        if (prime(a) && prime(k)){
            cout << "Yes, it's a super prime" << endl;
        }
        else{
            cout << "No, it's just a prime" << endl;
        }
    }
    return 0;
}