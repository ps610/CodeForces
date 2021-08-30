#include "iostream";

using namespace std;

int main()
{
    int k, n, w;
    int borrow = 0;
    int price = 0;

    cin >> k >> n >> w;

    for (int i = 1; i <= w; ++i)
    {
        price += k * i;
    }

    if (price > n)
        borrow = price - n;

    cout << borrow;

    return 0;
}