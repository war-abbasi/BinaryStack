#include <iostream>
#include "stack.h"
using namespace std;

int main() {
    int n, q, r,c;
    do{
        cout<<"Enter 1 to start and 0 to Quit " << endl;
        cin>>c;
        if (c == 1)
        {
            cout << "Enter Number to convert in Binary state: " << endl;
            cin >> n;
            stack s;
            // Convert to binary
            while (n != 0)
            {
                q = n / 2;
                r = n % 2;
                s.push(r);
                n = q;
            }
            // Display binary representation
            while (!s.isempty())
            {
                cout << s.top() << " ";
                s.pop();
            }
            cout << endl;
        }
        else
        {
            cout<<"Error 404"<<endl;
        }

    }
    while(c!=0);

    return 0;
}

