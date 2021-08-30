#include "iostream";

using namespace std;

int main()
{
    string n;
    int count = 0;

    cin >> n;

    for (char i : n)
    {
        if (i == '4' || i == '7')
            count++;
    }

    if (count == 4 || count == 7)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}