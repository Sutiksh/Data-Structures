#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
#define max 5

class stack{
    int stk[max],*top,*tos;
public:
    stack(){
        top=NULL;
    }

    void push(int x)
    {
        if(top=(tos+max))
        {
            cout<<"Stack overflow"<<endl;
        }
        else{
            *top=x;
            cout<<"Element has been inserted"<<*(top)<<endl;
        }
    }

    void pop()
    {
        if(top=tos)
        {
            cout<<"Stack Underflow"<<endl;
        }
        else{
            top--;
            cout<<"Element has been deleted"<<*(top)<<endl;
        }
    }

    void display()
    {
        /*if(top=tos)
        {
            cout<<"Stack Underflow"<<endl;
        }
        else{
            */for(int i=max;i>=0;i--){
                cout<<stk[i]<<endl;
            }
        //}
    }
};

int main()
{
    int ch;
    stack st;
    while(1)
    {
        cout<<"\n 1.Push 2.Pop 3.Display 4.Exit\n"<<endl;
        cin>>ch;
        switch(ch)
        {
        case 1:
            cout<<"Enter a number"<<endl;
            cin>>ch;
            st.push(ch);
            break;
        case 2:
            st.pop();
            break;
        case 3:
            st.display();
            break;
        case 4:
            exit(0);
        }
    }
    return 0;
}

