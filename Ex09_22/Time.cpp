#include<iostream>
#include<iomanip>
#include<stdexcept>
#include"Time.h"
using namespace std;

Time::Time(int second)
{
    settime(second);
}
void Time::settime(int s)
{
    second=s;//����ctime���л�ȡ��ʱ�丳��second
}

unsigned int Time::gethour()const
{
    int h;
    h=second%86400/3600+8;//����ת����0-23��Сʱ
    return h;//����Сʱ
}
unsigned int Time::getminute()const
{
    int m;
     m=second%3600/60;//����ת����0-59�ķ���
     return m;//���ط���
}
unsigned int Time::getsecond()const
{
    int s;
    s=second%60;//����ת����0-59֮�ڵ���
    return s;//�����
}
void Time::tick()
{
    second+=1;//�����һ
}
void Time::printuniversal()const//���24Сʱ�Ƶ�ʱ��
{
    cout<<setfill('0')<<setw(2)<<gethour()<<":"<<setw(2)<<getminute()<<":"<<setw(2)<<getsecond();
}
void Time::printstandard()const//���12Сʱ�Ƶ�ʱ��
{
    cout<<((gethour()==0||gethour()==12)?12:gethour()%12)<<":"<<setfill('0')<<setw(2)<<getminute()<<":"<<setw(2)<<getsecond()<<(second%86400/3600+8<12?"AM":"PM");
}
