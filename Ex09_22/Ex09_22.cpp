#include<iostream>
#include<stdexcept>
#include"Time.h"
#include<ctime>//ime�ı�׼��

using namespace std;
int main()
{
    time_t now;
    time(&now);
    Time time1(now);
    time1.printstandard();//���12Сʱ�Ƶ�ʱ��
    cout<<"\n";
    time1.printuniversal();//���24Сʱ�Ƶ�ʱ��
    while(time1.getsecond()<59)//���������58
    {
        cout<<"\n"<<time1.getsecond()<<endl;//�����
        time1.tick();//����+1
    }
    cout<<"\n"<<time1.getsecond();//���������59
}
