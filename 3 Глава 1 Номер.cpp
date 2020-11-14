#include <iostream>
using std::string;
using std::cout;
using std::endl;
using std::cin;
static const int convector = (12);

int main()
{
    int dyim;
    cout << "Введите рост в дюймах" << endl;
    cin >> dyim;
    cout << "Футы " << dyim/convector << ", дюймы " << dyim%convector << endl;
}
