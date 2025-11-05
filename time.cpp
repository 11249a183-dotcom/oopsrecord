#include<iostream>
using namespace std;
class Time
{
    private:
    int hours,minutes;
    public:
    void gettime();
    void addtime(Time x1, Time x2);
    void displaytime();
};
void Time::gettime()
{
    cout<<"Enter the hours";
    cin>>hours;
    cout<<"Enter the minutes";
    cin>>minutes;
}
void Time::addtime(Time x1, Time x2)
{
    minutes=x1minutes+x2minutes;
    hours=minutes/60;
    minutes=minutes%60;
    hours=hours+x1hours+x2hours
}
void Time::displaytime()
{
    cout<<\n "hours:<<"hours;
    cout<<\n "minutes:"<<minutes;
}
int main()
{
    time t1,t2,t3
    t1.gettime();
    t2.grttime();
    t3.addtime(t1+t2);
    t1.displaytime();
    t2.displaytime();
    t3.displaytime();
}