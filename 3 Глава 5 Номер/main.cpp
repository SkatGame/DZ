#include <iostream>
using std::string;
using std::cout;
using std::endl;
using std::cin;

int main()
{
    cout << "Введите количестволюдей проживающих на Земле" <<endl;
    long long CZemlya;
    cin >> CZemlya;
    cout << "Введите количестволюдей проживающих на Китае" <<endl;
    long long CChina;
    cin >> CChina;
    long double Prozent= (((long double)CChina/(long double)CZemlya)*100);
    cout << "Кол-во людей проживающих в Китае состовляет "<<Prozent<<"% от населения Земли"<<endl;

}
