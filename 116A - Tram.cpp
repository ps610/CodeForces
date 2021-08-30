#include "iostream";

using namespace std;

int main()
{
    int capacity = 0;
    int stops;
    int pax = 0;

    cin >> stops;

    for (int i = 0; i < stops; ++i)
    {
        int out, in;
        cin >> out >> in;

        pax = pax - out + in;
        if (pax > capacity)
            capacity = pax;
    }

    cout << capacity;

    return 0;
}