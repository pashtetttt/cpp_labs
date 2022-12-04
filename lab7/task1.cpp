#include <iostream>

using namespace std;

struct Time
{
    int hours;
    int minutes;
    int seconds;

    void ShowSeconds(){
        cout << "Seconds: " << seconds << endl;
    }
};

Time InputTime()
{
    Time t;
    cout <<"\nInput hours";
    cin >> t.hours;

    cout <<"\nInput minutes";
    cin >> t.minutes;

    cout <<"\nInput seconds";
    cin >> t.seconds;
}

Time AddTime(Time t1, Time t2)
{
    Time t;
    t.hours = t1.hours + t2.hours;
    t.minutes = t1.minutes + t2.minutes;
    t.seconds = t1.seconds + t2.seconds;
    if (t.seconds >= 60)
    {
        t.seconds -= 60;
        t.minutes++;
    }
    if (t.minutes >= 60)
    {
        t.minutes -= 60;
        t.hours++;
    }
    return t;
}


int main()
{
    Time t1 = InputTime();
    Time t2 = InputTime();
    t1.ShowSeconds();
    t2.ShowSeconds();
    Time t = AddTime(t1, t2);
    t.ShowSeconds();
}