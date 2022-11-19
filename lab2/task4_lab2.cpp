#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <string>
using namespace std;

// стрельба по мишени

int main()
{
    
    int goal = 50;
    int centX = rand() % 3;
    int centY = rand() % 3;
    int score = 0;
    int count = 0;
    float noise = static_cast <float> (rand()) / static_cast <float> (RAND_MAX);
    cout << "Ваша цель - " << goal << " очков" << endl;
    while (goal > score){
        float x, y;
        cin >> x;
        cin >> y;
        x = x - noise;
        y = y - noise;
        if ((x - centX) * (x - centX) + (y - centY) * (y - centY) < 1){
            score += 10;
        }
        else if ((x - centX) * (x - centX) + (y - centY) * (y - centY) < 4){
            score += 5;
        }
        else if ((x - centX) * (x - centX) + (y - centY) * (y - centY) < 9){
            score += 1;
        }
        count++;
        cout << "Очки: " << score << endl;
    }
    string result;
    if (count < 7){
        result = "Снайпер";
    }
    else if(count < 12){
        result = "Стрелок";
    }
    else {
        result = "Новичок";
    }
    cout << "Выстрелов: " << count << endl;
    cout << "Уровень: " << result << endl;
}