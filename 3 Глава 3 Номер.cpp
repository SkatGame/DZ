#include <iostream>
using std::string;
using std::cout;
using std::endl;
using std::cin;
static const float convectorSecondInDegre = 3600;
static const float convectorMinInDegre = 60;

int main()
{
    float sec,min,deg;
   cout <<"Введите градусы,минуты и секунды, разделив их пробелом" << endl;
   cin >> deg;
   cin >> min;
   cin >> sec;
   float degFin = deg+(min/convectorMinInDegre)+(sec/convectorSecondInDegre);
   cout << deg<<" градусов,"<<min<<" минут, "<<sec<<" секунд = "<<degFin<<"градусов" <<endl;
}
