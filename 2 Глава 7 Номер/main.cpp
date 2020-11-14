#include <iostream>
using std::string;
using std::cout;
using std::endl;
using std::cin;

int convector(int h,int m)
{
    cout << "Время: " << h << ":" << m << endl;
    return 0;
}

int main()
{
    int hours,min;
    cout << "Введите кол-во часов" << endl;
    cin >> hours;
    cout << "Введите кол-во минут" << endl;
    cin >> min;
    convector(hours,min);
}

