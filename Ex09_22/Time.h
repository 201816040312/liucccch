#ifndef TIME_H
#define TIME_H

using namespace std;

class Time
{
public:
    explicit Time(int);
    void settime(int);//��ֵ����second
    unsigned int gethour()const;//����Сʱ
    unsigned int getminute()const;//���ط���
    unsigned int getsecond()const;//������
    void printuniversal()const;//���24Сʱ�Ƶ�ʱ��
    void printstandard()const;//���12Сʱ�Ƶ�ʱ��
    void tick();//�����һ
private:
    unsigned int second;//���ݳ�Ա��
};
#endif // TIME_H
