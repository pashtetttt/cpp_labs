#include <iostream>
#include <string>
#include <array>

using namespace std;

bool validness(string ar)
{
    
    int len =  size(ar);
    cout << len << endl;
    
    int n = 0;
    if (len < 11) return false;
    int sum = 0;
    int controlNum = 0;
    for (int i = 0; i < len; i++){
        if (isdigit(ar[i])){
            if (n == 11) {return false;}
            if (n < 9){
                string s(1, ar[i]);
                sum += stoi(s) * n;
            }
            else if (n == 9)
            {
                string s(1, ar[i]);
                controlNum += stoi(s) * 10;
            } 
            else if (n == 10) {
                string s(1, ar[i]);
                controlNum += stoi(s);
                }
            n++;
        }
        else if (ar[i] == '-' || ar[i] == ' ') continue;
        else return false;
    }
    cout << sum << endl;
    cout << controlNum;
}

int main()
{
    string ar = "12345678900";
    cout << validness(ar) << endl;
    return 0;
}

