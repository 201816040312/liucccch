//ͷ�ļ�
using namespace std;

class Rectangle
{
public:
    Rectangle();//���캯��
    Rectangle(double,double);
    void setlength(double);//��ȡ�����εĳ�
    double getlength();//���س����εĳ�
    void setwidth(double);//��ȡ�����εĿ�
    double getwidth(); //���س����εĿ�
    double perimeter();//���㳤���ε��ܳ�
    double area();//���㳤���ε����
private:
    double width,length;//�������Ϳ���������
};
