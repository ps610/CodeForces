#include "iostream";

using namespace std;

int main()
{
    string input;
    cin >> input;

    input[0] = toupper(input.at(0));
    cout << input;

    return 0;
}