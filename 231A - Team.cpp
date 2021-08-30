#include "iostream";

using namespace std;

int main() {
    int n = 0;
    int a = 0;

    cin >> n;
    for (int i = 0; i < n; i++) {
        int p, v, t;
        cin >> p >> v >> t;

        if (p + v + t >= 2)
            a++;
    }

    cout << a << endl;
    return 0;
}