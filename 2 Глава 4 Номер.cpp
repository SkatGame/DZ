#include <iostream>
using std::string;
using std::cout;
using std::endl;
using std::cin;
int main()
{
    int year,month;
    cout << "Введите свой возраст в годах" << endl;
    cin >> year;
    month = year * 12;
    cout << "Ваш возраст в месяцах:" << month <<endl;
    return 0;
}

