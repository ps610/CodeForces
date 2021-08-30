#include "iostream";

using namespace std;

int main()
{
    int a = 0, b = 0, c = 0;
    string input;
    cin >> input;

    for (char i : input)
    {
        switch (i)
        {
            case '1': a++;
                break;
            case '2': b++;
                break;
            case '3': c++;
                break;
            default:
                break;
        }
    }

    bool first = true;
    for (int j = 0; j < a; ++j)
    {
        if (first)
        {
            cout << "1";
            first = false;
        }
        else
        {
            cout << "+1";
        }
    }
    for (int j = 0; j < b; ++j)
    {
        if (first)
        {
            cout << "2";
            first = false;
        }
        else
        {
            cout << "+2";
        }
    }
    for (int j = 0; j < c; ++j)
    {
        if (first)
        {
            cout << "3";
            first = false;
        }
        else
        {
            cout << "+3";
        }
    }
    cout << endl;

    return 0;
};