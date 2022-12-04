#include <iostream>
#include <stdio.h>
#include <string.h>
#include <cstring>


using namespace std;

int main()
{
    string str;
    getline(cin, str);
    char * cstr = new char [str.length()+1];
    strcpy(cstr, str.c_str());
 
    // cstr now contains a c-string copy of str
 
    char * p = strtok(cstr," ");
    int i = 0;
    int first = 0;
    int second = 0;
    int op = 0;
    while (p!=0)
    {
        if (i == 0) 
        {
            int x = strncmp(p, "task4", 5);
            if (x != 0)
            {
                cout << "Wrong name !" << endl;
                break;
            }

        }
        if (i == 1)
        {
            int x = strncmp(p, "-a", 2);
            if (x != 0)
            {
                x = strncmp(p, "-m", 2);
                if (x != 0)
                {
                    cout << "Wrong operation !" << endl;
                    break;
                }
                else op = 1; 
            }

        }
        if (i == 2)
        {
            first = atoi(p);
        }
        if (i == 3)
        {
            second = atoi(p);
        }
        p = strtok(NULL," ");
        i++;
    }
    if (op == 0) cout << first + second << endl;
    else cout << first * second << endl;
    
    delete[] cstr;
    return 0;

}