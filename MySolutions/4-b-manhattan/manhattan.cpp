#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main() {
    int n;
    cin >> n;
    vector<int> x(n), y(n);
    for (int i = 0; i < n; ++i)
        cin >> x[i] >> y[i];

    vector<int> f(n), s(n);

    // your code

    for (int i = 0; i < n; ++i) {
        cout << f[i] << ' ' << s[i] << endl;
    }

    return 0;
}