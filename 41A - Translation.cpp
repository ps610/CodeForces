#include "iostream";

using namespace std;

int main()
{
    string s, t;
    string x;

    cin >> s;
    cin >> t;

    for (int i = s.length()-1; i >= 0 ; --i)
    {
        x += s[i];
    }

    if (x == t)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}