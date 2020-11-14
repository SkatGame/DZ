#include <iostream>
using std::string;
using std::cout;
using std::endl;
using std::cin;
static const int convectorFutInDyim = 12;
static const float convectorDyimInMetr = 0.0254;
static const float convvectirFuntInKG = 2.2;

int main()
{
    int dyim,funt,fut;

    cout << "Введите рост в футах и дюймах (разделите их пробелом)" << endl;
    cin >> fut;
    cin >> dyim;
    cout << "Введите массу в фунтах" << endl;
    cin >> funt;
    cout << "BMI:" <<(funt/convvectirFuntInKG)/(((fut*convectorFutInDyim + dyim)*convectorDyimInMetr)*((fut*convectorFutInDyim + dyim)*convectorDyimInMetr)) << endl;
}
