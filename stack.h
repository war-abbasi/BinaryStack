#include <iostream>
#include "node.h"
using namespace std;

class stack
{
    node* pTop;
public:
    stack()
    {
        pTop= nullptr;
    }

    bool isEmpty();
    int top();
    void push(int n);
    void pop();

    ~stack()
    {
        node* temp=pTop;
        while(temp!= nullptr)
        {
            pTop=pTop->next;
            delete temp;
            temp=pTop;

        }
    }
};