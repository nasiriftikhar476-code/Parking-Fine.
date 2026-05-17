#include<iostream>
using namespace std;

void add(int c)
{
    int extra = c - 2;
    int balance = 100 + (extra * 50);
    cout << "The total fee is " << balance << endl;
}

int main()
{
    int c;
    cout << "Enter your hours" << endl;
    cin >> c;

    if(c <= 0)
    {
        cout << "Invalid hours" << endl;
    }
    else if(c <= 2)
    {
        cout << "The total fee is 100" << endl;
    }
    else
    {
        add(c);
    }

    return 0;
}
