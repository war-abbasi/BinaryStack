#include <iostream>
#include "stack.h"
using namespace std;

bool stack ::isEmpty()
{
    if(pTop == nullptr)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int stack :: Top()
{
    if(isEmpty())
    {
        cout<<"stack is empty"<<endl;
        return -1;
    }
    else
    {
       return pTop->data;
    }
}

void stack :: Push(int n)
{
    node*temp;
    temp=new node;
    temp->data=n;
    temp->next= nullptr;
    if(isEmpty())
    {
        pTop=temp;
    }
    else
    {
        temp->next=pTop;
        pTop=temp;
    }
}

void stack :: pop()
{
    if(isEmpty())
    {
        cout<<"Stack is empty"<<endl;
    }
    else
    {
        node*temp=pTop;
        pTop=pTop->next;
        delete temp;
    }
}
