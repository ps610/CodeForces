#include "iostream";

using namespace std;

int main()
{
    string input;
    int duplicate = 0;
    int ulCount = 0;

    cin >> input;

    for (int i = 0; i < input.length(); ++i)
    {
        for (int j = 0; j < i; ++j)
        {
            if (input[i] == input[j])
                duplicate++;
        }

        if (duplicate == 0)
            ulCount++;
        duplicate = 0;
    }

    if (ulCount % 2 == 0)
        cout << "CHAT WITH HER!" << endl;
    else
        cout << "IGNORE HIM!" << endl;

    return 0;
}