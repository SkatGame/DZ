#include <iostream>
using std::string;
using std::cout;
using std::endl;
using std::cin;

int convector(float value)
{
    cout << "Температура в фаренгейах:" << (value*1.8 + 32) <<endl;
    return 0;
}

int main()
{
    float Celsius;
    cout << "Введите температуры в градусах цельсия" << endl;
    cin >> Celsius;
    convector(Celsius);
}

