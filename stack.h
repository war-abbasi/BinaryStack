#include <iostream>
#include "node.h"
using namespace std;

class stack
{
    node*ptop;
public:
    stack()
    {
        ptop=0;
    }

    bool isempty()
    {
        if(ptop==0)
            return true;
        else
            return false;

    }

    int top()
    {
        if(isempty())
        {
            cout<<"stack is empty"<<endl;
            return -1;
        }

        else
        {
            return ptop->data;
        }
    }

    ~stack()
    {
        node* temp=ptop;
        while(temp!=0)
        {
            ptop=ptop->next;
            delete temp;
            temp=ptop;

        }
    }


    void push(int n)
    {
        node*temp;
        temp=new node;
        temp->data=n;
        temp->next=0;

        if(isempty())
        {
            ptop=temp;
        }
        else
        {
            temp->next=ptop;
            ptop=temp;

        }

    }

    void pop()
    {
        if(isempty())
        {
            cout<<"Stack is empty"<<endl;
        }
        else
        {
            node*temp=ptop;
            ptop=ptop->next;
            delete temp;
        }
    }

};