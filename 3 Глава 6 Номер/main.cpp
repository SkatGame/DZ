#include <iostream>
using std::string;
using std::cout;
using std::endl;
using std::cin;


int main()
{
    cout << "Введите количество пройденных километров" <<endl;
    int KM;
    cin >> KM;
    cout << "Введите количество потраченных литров бензина" <<endl;
    int LBiz;
    cin >> LBiz;
    double BizNaKM= (((double)LBiz/(double)KM)*100);
    cout << "Расход "<<BizNaKM<<" литров на 100 км"<<endl;

}
