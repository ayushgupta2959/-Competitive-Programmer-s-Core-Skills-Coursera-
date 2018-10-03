#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main() {
    int n;
    cin >> n;
    vector<double> a(n), b(n);
    for (int i = 0; i < n; ++i)
        cin >> a[i];
    for (int i = 0; i < n; ++i)
        cin >> b[i];

    bool equal_sum = false;
    bool sum_a_larger = false;
    // your code

    if (equal_sum)
        cout << "SUM(A)=SUM(B)" << endl;
    else
        if (sum_a_larger)
            cout << "SUM(A)>SUM(B)" << endl;
        else
            cout << "SUM(A)<SUM(B)" << endl;

    return 0;
}