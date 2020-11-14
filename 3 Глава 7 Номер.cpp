#include <iostream>
using std::string;
using std::cout;
using std::endl;
using std::cin;


int main()
{
    cout << "Введите расход в литров на 100 км" <<endl;
    float LbizNa100KM;
    cin >> LbizNa100KM;
    float MilNaGallon = 235.15/LbizNa100KM;
    cout << "Расход в милях на галлон = "<<MilNaGallon<<endl;
}
