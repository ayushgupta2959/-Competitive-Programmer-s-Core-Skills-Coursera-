#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main() {
    int n;
    cin >> n;
    vector<int> m(n + 1);
    for (int i = 0; i <= n; ++i)
        cin >> m[i];

    long long result = 0;
    // your code

    cout << result << endl;

    return 0;
}