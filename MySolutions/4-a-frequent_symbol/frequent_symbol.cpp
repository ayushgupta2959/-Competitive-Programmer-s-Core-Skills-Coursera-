#include <iostream>
#include <vector>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;

int main() {
    string s;
    cin >> s;
    int q;
    cin >> q;
    vector<int> l(q), r(q);
    for (int i = 0; i < q; ++i)
        cin >> l[i] >> r[i];

    vector<char> result(q);

    // your code

    for (int i = 0; i < result.size(); ++i) {
        cout << result[i] << endl;
    }

    return 0;
}