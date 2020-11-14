#include <iostream>
using std::string;
using std::cout;
using std::endl;
using std::cin;

int firststring()
{
    static string word1 = "Three blind mice";
    cout << word1 << endl;
    cout << word1 << endl;
}

int secondstring()
{
    string word2 = "See how they run";
    cout << word2 << endl;
    cout << word2 << endl;
}
int main()
{
    firststring();
    secondstring();
}

