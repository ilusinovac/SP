/*
Од стандарден влез се внесува даден број X,  а потоа се внесуваат броеви додека не се внесе нешто различно од број. 
За секој од броевите да се провери дали неговиот број на цифри е еднаков со бројот на цифри на Х, и доколку условот е исполнет, да се испечати.
*/

#include <iostream>

using namespace std;

int main()
{
    int x,broj;
    cin>>x;
        int brojacbroj=0;
        int tempB=x;
    while(cin>>broj)
    {
        while(tempB!=0)
        {
            tempB/=10;
            brojacbroj++;
            
        }
            int tempBroj=broj;
    int brojacB=0;
    while(tempBroj!=0)
    {
        tempBroj/=10;
        brojacB++;
    }
    
    if (brojacbroj == brojacB)
    {
        cout<<broj<<endl;
    }
    }

    
    return 0;
}
