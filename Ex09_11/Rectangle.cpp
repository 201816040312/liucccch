//Rectangle���ʵ��
#include<iostream>

using namespace std;
#include"Rectangle.h"
Rectangle::Rectangle()//Ĭ�ϵ��޲ι��캯��
{
    length=1;//����ʼֵ���������εĳ��Ϳ�
    width=1;
}
Rectangle::Rectangle(double m,double n)//�в����Ĺ��캯��
{
    setlength(m);
    setwidth(n);
}
void Rectangle::setlength(double a)
{
    if(a>0&&a<20)
      length=a;
}
double Rectangle::getlength()
{
    return length;
}
void Rectangle::setwidth(double b)
{
    if(b>0&&b<20)
      width=b;
}
double Rectangle::getwidth()
{
    return width;
}
double Rectangle::perimeter()//���㳤���ε��ܳ�
{
    return 2*(width+length);
}
double Rectangle::area()//���㳤���ε����
{
    return width*length;
}
