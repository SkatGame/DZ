#include <iostream>
using std::string;
using std::cout;
using std::endl;
using std::cin;
static const long SecInMin = 60;
static const long MinInHour = 60;
static const long MourInDay = 24;


int main()
{
    cout << "Введите количество секунд" <<endl;
    long sec;
    cin >> sec;
    long Cdays = sec/SecInMin/MinInHour/MourInDay;
    long Chours = (sec/SecInMin/MinInHour)%MourInDay;
    long Cmin = (sec/SecInMin)%MinInHour;
    long Csec = sec%SecInMin;
    cout <<sec<<" секунд = "<<Cdays<<" дней, "<<Chours<<" часов, "<<Cmin<<" минут, "<<Csec<<" секунд" <<endl;
}
