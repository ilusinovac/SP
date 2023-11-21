#include <iostream>
using namespace std;

int main()
{
  int n;
  int proizvod=1;
  int suma=0;
  int brojac=0;
  double procent;
  for(int i=n; i>=0; i--)
    {
      if(i%2==0 && i!=0)
      {
        proizvod=i*i;
        brojac++;
        suma+=proizvod;
      }
      procent=suma/brojac;
    }
}
