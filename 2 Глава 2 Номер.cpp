#include <iostream>
using std::string;
using std::cout;
using std::endl;
using std::cin;
int main()
{
    int farlong,yard;
    int perevod = 220;
    cout << "Введите растояние в фарлонгах" << endl;
    cin >> farlong;
    yard = farlong * perevod;
    cout << "Растояние в ярдах:" << yard <<endl;
    return 0;
}
