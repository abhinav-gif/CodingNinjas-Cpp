#include <iostream>
using namespace std;
int main()
{
    char ch;
    cout << "Enter character" << endl;
    cin >> ch;
    if (ch >= 'A' && ch <= 'Z')
    {
        cout << "1" << endl;
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        cout << "0" << endl;
    }
    else
    {
        cout << "-1" << endl;
    }
}