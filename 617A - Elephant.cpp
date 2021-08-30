#include "iostream";

using namespace std;

int main()
{
    int x, n = 0;

    cin >> x;

    n = x/5;
    if (x % 5 != 0)
        n++;

    cout << n;

    return 0;
}