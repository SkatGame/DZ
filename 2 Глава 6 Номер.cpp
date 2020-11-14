#include <iostream>
using std::string;
using std::cout;
using std::endl;
using std::cin;

int convector(float value)
{
    cout <<  value<< " с.л. = "<< (value*63240) << "а.е." << endl;
    return 0;
}

int main()
{
    float SvetGod;
    cout << "Введите  растояние в световых годах" << endl;
    cin >> SvetGod;
    convector(SvetGod);
}

