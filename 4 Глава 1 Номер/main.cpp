#include <iostream>
using std::string;
using std::cout;
using std::endl;
using std::cin;


int main()
{
    string fPartName,sPartName,name,lastname,year;
    char grade;
    cout << "Введите своё имя" <<endl;
    cin >>fPartName;
    if (cin.get()!='\n') {
        cin >> sPartName;
        name = string(fPartName + " " + sPartName);
    }
    else{
        name = fPartName;
    }
    cout << "Введите свою фамилю" <<endl;
    cin >> lastname;
    cout << "Введите оценку которую заслуживаете" <<endl;
    cin >> grade;
    cout << "Введите свой возраст" <<endl;
    cin >> year;
    cout << "Имя:"<<lastname<<", "<<name<<"\n"<<"Оценка: "<<char(grade+1)<<"\n"<<"Возраст: "<<year<<endl;
}
