#include<iostream>
using namespace std;
class Time
{
    private:
    int hours,minutes;
    public:
    void gettime();
    void addtime(Time t1, Time t2);
    void display();
};
void Time::gettime()
{
    cout<<"Enter Hours:";
    cin>>hours;
    cout<<"Enter Minutes:";
    cin>>minutes;
}
void Time::addtime(Time t1, Time t2)
{
    minutes=t1.minutes+t2.minutes;
    hours=minutes/60;
    minutes=minutes%60;
    hours=hours+t1.hours+t2.hours;
}
void Time::display()
{
    cout<<"\n Hours:"<<hours;
    cout<<"\n Minutes:"<<minutes;
}
int main()
{
    Time T1,T2,T3;
    T1.gettime();
    T2.gettime();
    T3.addtime(T1,T2);
    T1.display();
    T2.display();
    T3.display();
}