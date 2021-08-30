#include "iostream";

using namespace std;

int main()
{
    int stones;
    string input;
    int result = 0;

    cin >> stones;
    cin >> input;
    char letter = input[0];

    for (int i = 1; i < input.length(); i++)
    {
        if (input[i] == letter)
            result++;
        else
            letter = input[i];
    }

    cout << result << endl;

    return 0;
}