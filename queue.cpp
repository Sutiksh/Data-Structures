#include<iostream>
#include<stdlib.h>
using namespace std;

class Queue{

public:
int queue1[5],f,r,value;

public:
Queue()
    {
        f=r=-1;
    }
void add(int value)
{
    /*if(r>4)
    {
        cout<<"The queue is full!!"<<endl;
    }*/
    if(f>r)
    {
     cout<<"The queue is empty!!"<<endl;
    }
    else{
        queue1[++r] = value;
        cout<<"Element inserted "<<value<<endl;
    }
}

void delet()
{
    /*if(f>r)
    {
        cout<<"Queue is empty!!"<<endl;
    }*/
    if(r>4)
    {
        cout<<"Queue is full!!"<<endl;
    }
    else
    {
        cout<<"Element deleted "<<queue1[++f]<<endl;
    }
}

void display()
{
    for(int i=f+1;i<=r;i++)
    {
        cout<<queue1[i]<<endl;
    }
}
};

int main()
{
    Queue q;
    q.add(10);
    q.add(20);
    q.add(30);
    q.add(40);
    q.delet();
    q.display();
    return 0;
}
