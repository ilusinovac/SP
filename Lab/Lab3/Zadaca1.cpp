/*
Да се напише програма која ќе ги оцени студентите според нивните академски постигнувања. Програмата треба да ги изврши следниве задачи:

    Проверка на условите:
        Програмата проверува дали внесените податоци се валидни и дали студентот има повеќе од 100 кредити и просек поголем од 8. Ако се исполнети условите се прават следниве пресметки:
            Предвидени кредити се пресметуваат како (2023−Година на запишување)×60
            Поени се пресметуваат како:
                Поени=(Број на кредити/Предвидени кредити)×10+(Просек−8.5)×6.5

            Доколку студентот има повеќе од 240 кредити, се прикажува "Needs to graduate!" како дополнителна информација. Ако просекот на студентот е поголем од 9, се прикажува "Great student!" како дополнителна информација. 
        Во спротивно, ако условите не се исполнети, програмата поставува вредност на поените на 0.

Од стандарден влез се читаат број на кредити (цел број), година на запишување (2010-2023) и просек (децимален број). Да се испечатaт поените на студентот и соодветната дополнителна порака(доколку е потребно).
*/

#include <iostream>

using namespace std;

int main()
{
    int godinaZap;
    float prosek,krediti;
    cin>>krediti>>godinaZap>>prosek;
    int predvideniKrediti=(2023-godinaZap)*60;
    float  poeni=(krediti/predvideniKrediti)*10+(prosek-8.5)*6.5;
    if(krediti>240)
    {
        cout<<"Needs to graduate!"<<" "<<"Points: "<<poeni<<endl;
    }
    else if(krediti>100 && prosek>9)
    {
        cout<<"Great student!"<<" "<<"Points: "<<poeni<<endl;
    }
    else if(krediti>100 && prosek>8)
    {
        cout<<"Points: "<<poeni<<endl;
    }
    else{
        cout<<"Points: 0";
    }

    return 0;
}