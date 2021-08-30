#include "iostream"
#include "algorithm"

using namespace std;

int main()
{
    string s;
    int lower = 0, upper = 0;

    cin >> s;

    for (char c : s)
    {
        if (islower(c))
            lower++;
        else
            upper++;
    }

    if (lower >= upper)
        transform(s.begin(), s.end(), s.begin(), ::tolower);
    else
        transform(s.begin(), s.end(), s.begin(), ::toupper);

    cout << s;

    return 0;
}