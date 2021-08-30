#include "iostream"

using namespace std;

int main()
{
    int n;
    string s;
    int a = 0, d = 0;

    cin >> n;
    cin >> s;

    for (int i = 0; i < n; ++i)
    {
        if (s[i] == 'D')
            d++;
        else if (s[i] == 'A')
            a++;
    }

    if (a > d)
        cout << "Anton";
    else if (d > a)
        cout << "Danik";
    else
        cout << "Friendship";

    return 0;
}