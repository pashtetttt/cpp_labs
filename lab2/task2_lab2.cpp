#include <iostream>
#include <math.h>
using namespace std;

// Проверка СНИЛС
int main()
{
    long long number;
    cin >> number;
    int controlNumber = number % 100;
    int sum = 0;
    number = number / 100;
    for (int i = 1; i < 10; i++){
        sum = sum + i * (number % 10);
        number = number / 10;
    }
    cout << sum << endl;
    bool answer = false;
    if (sum < 100){
        if (sum == controlNumber){
            answer = true;
        }
    }
    else if (sum == 100 || sum == 101)
    {
        if (controlNumber == 00){
            answer = true;
        }
    }
    else if (sum > 101){
        if (sum % 101 < 100){
            if (controlNumber == (sum % 101)){
                answer = true;
            }
        }
        else {
            if (controlNumber == 0){
                answer = true;
            }
        }
    }
    cout << answer << endl;
    return 0;    
}