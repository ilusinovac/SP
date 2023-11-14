#include <iostream>

using namespace std;

int main() {

    char a;
    int zbir=0, temp=0;
    while(cin>>a)
    {
        switch (a) {
            case 'A':
                zbir+=10;
                break;
            case 'B':
                zbir+=11;
                break;
            case 'C':
                zbir+=12;
                break;
            case 'D':
                zbir+=13;
                break;
            case 'E':
                zbir+=14;
                break;
            case 'F':
                zbir+=15;
                break;
            case 'a':
                zbir+=10;
                break;
            case 'b':
                zbir+=11;
                break;
            case 'c':
                zbir+=12;
                break;
            case 'd':
                zbir+=13;
                break;
            case 'e':
                zbir+=14;
                break;
            case 'f':
                zbir+=15;
                break;
        }
        if(a=='.')
        {
            break;
        }
        if(a >= '0'&&a <= '9')
        {
            temp = a - '0';
            zbir+=temp;
        }


    }
    if(zbir % 16 == 0)
    {
        if(zbir%10 == 6 && zbir/10 % 10 == 1)
        {
            cout<<"Poln pogodok";
        }
        else{
            cout<<"Pogodok";
        }
    }
    else
    {
        cout<<zbir;
    }


    return 0;
}
