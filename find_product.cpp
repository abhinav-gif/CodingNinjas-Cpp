#include <iostream>
using namespace std;

int main()
{
    int n, product = 1;
     cout<<"Enter Number"<<endl;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        product *= i;
    }
    cout << product << endl;
}