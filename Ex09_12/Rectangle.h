//ͷ�ļ�
#include"Point.h"
using namespace std;

class Rectangle
{
public:
    Rectangle(const Point&);
    double perimeter();//���㳤���ε��ܳ�
    double area();//���㳤���ε����
private:
    //double width,length;//�������Ϳ���������
    Point complex;
};
