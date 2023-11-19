/*
Од тастатура се читаат два цели броеви a, b.
 Да се испечатат сите парни броеви кои што се деливи со 7 и сите непарни броеви кои што не се деливи со 3 во опсег (а, b].
 Ако вакви броеви не постојат да се испечати 0, а во спротивно да се испечати колкав процент од броевите ги исполнуваат условите(односно ќе бидат испечатени).
 */
#include  <iostream>

using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    int delivi=0;
    int nedelivi=0;
    if(a<=1 && b<=2)
    {
        cout<<"0"<<endl;
    }
    for(int i=a+1;i<=b;i++)
    {
        if(i%3==0 && i%7==0)
        {
            cout<<i<<endl;
          delivi++;
        }
        if(i%2!=0 && i%3!=0)
        {
            cout<<i<<endl;
            nedelivi++;
        }
    }
    if(nedelivi==0 && delivi==0)
    {
        cout<<"0"<<endl;
    }
    int vkupno=delivi+nedelivi;
    double procent=vkupno/double(b-a)*100;
    cout<<procent<<"%"<<endl;
}
