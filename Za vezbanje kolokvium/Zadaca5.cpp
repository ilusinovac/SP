#include <iostream>

using namespace std;

int main() {

    int a, b,digit_a,digit_b,temp,i=1;
    
    cin>>a>>b;
    if(b > a)
    {
        temp = b;
        b = a;
        a = temp;
    }
    
    if(a <= 0 || b <= 0)
    {
        cout<<"Invalid input";
    }
    else if(a<10 || b<10)
    {
        cout<<"NE";
    }
    else
    {
        while(b!=0)
        {
            digit_b = b % 10;
            digit_a = a % 10;
            if(digit_b == digit_a && i % 2 == 0)
            {
                b /= 10;
            }
            else
            {
                a /= 10;
                i++;
            }
            if(a == 0)
            {
                break;
            }
            
    
        }
        if(b == 0)
        {
            cout<<"PAREN";
        }
        else
        {
            cout<<"NE";
        }
    }
    return 0;
}
