#include<iostream>
#include<stdlib.h>
#define size 5
using namespace std;

class CircularQueue{
public:
int num[size],head,tail,token=0;
    CircularQueue(){
        head=tail=-1;
    }
public:
    void enqueue(int value){
    if(head==0 && tail==(size-1)){
        cout<<"Queue is full!!"<<endl;
    }

    else if(head==-1 && tail==-1){
     head=0;
     tail=0;
     num[tail]=value;
     token=token+1;
    }
    else{
        num[tail]=value;
        tail=(tail+1)%size;
        token=token+1;
    }
    }

    void dequeue(){
    if(token<=0){
        cout<<"Nothing to delete!!"<<endl;
    }
    else{
        head=(head+1)%size;
        token=token-1;
    }
    }

    void display(){
        if(token<=0){
            cout<<"Nothing to show!!"<<endl;
        }
        else{
            int i;
            for(i=0;i!=tail;i++){
                cout<<num[i]<<endl;
            }
            if(i>size-1){
                i=0;
            }

        }
    }
};

int main(){
CircularQueue que;
que.enqueue(10);
que.enqueue(20);
que.enqueue(30);
que.enqueue(40);
que.enqueue(50);
que.display();
que.dequeue();
que.dequeue();
que.dequeue();
que.enqueue(70);
que.enqueue(80);
que.display();
return 0;
}
