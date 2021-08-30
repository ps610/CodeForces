#include "iostream";

using namespace std;

int main() {
    int n, result = 0;
    cin >> n;

    while (n--) {
        string operation;
        cin >> operation;

        if (operation.find("++") != -1) {
            result++;
        } else {
            result--;
        }
    }

    cout << result << endl;
    return 0;
} 