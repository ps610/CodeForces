#include "iostream";

using namespace std;

int main()
{
    int n, t;
    string queue;

    cin >> n >> t;
    cin >> queue;

    for (int i = 0; i < t; ++i)
    {
        for (int j = 0; j < queue.length(); ++j)
        {
            if (queue[j] == 'B' && queue[j+1] == 'G')
            {
                queue[j] = 'G';
                queue[j+1] = 'B';
                j++;
            }
        }
    }

    cout << queue;

    return 0;
}