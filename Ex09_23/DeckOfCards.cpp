#include<iostream>
#include <stdlib.h>
#include <time.h>
#include"Card.h"
#include"DeckOfCards.h"

using namespace std;
DeckOfCards::DeckOfCards(int a)//��ֵ52����Ƭ
{
    int i,j;
    for(i=0;i<4;i++)
    {
        for(j=1;j<14;j++)
        {
            deck.push_back(Card(j,i));
        }
    }
    currentcard=a;
}
void DeckOfCards::shuffle()//ϴ�ƺ���
{
     srand(time(0));//��ʼ�������������
    int i;
    for(i=0;i<52;i++)
    {
        Card tem(0,0);
        int r;
        r = rand() % 52;//���� 0��51֮�������
        tem=deck[i];
        deck[i]=deck[r];
        deck[r]=tem;
    }

}
void DeckOfCards::dealcard()//���һ����
{
    deck[currentcard].tostring();
    currentcard++;
    if(morecards())
        cout<<"No cards!"<<endl;
}
bool DeckOfCards::morecards()//�ж��Ƿ�����
{
    return currentcard==52?true:false;
}
void DeckOfCards::output()//52����ȫ�����
{
    int i;
    for(i=0;i<52;i++)
    {
        deck[i].tostring();
    }
}
