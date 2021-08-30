#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    string s1, s2;
    cin >> s1 >> s2;

    transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
    transform(s2.begin(), s2.end(), s2.begin(), ::tolower);

    int result;
    if (s1 < s2) {
        result = -1;
    } else if (s1 > s2) {
        result = 1;
    } else {
        result = 0;
    }
    cout << result << endl;
}