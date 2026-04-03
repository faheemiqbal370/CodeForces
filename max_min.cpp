#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    int maxVal = a;
    int minVal = a;

    if (b > maxVal) maxVal = b;
    if (c > maxVal) maxVal = c;

    if (b < minVal) minVal = b;
    if (c < minVal) minVal = c;

    cout << "Min = " << minVal << endl;
    cout << "Max = " << maxVal << endl;

    return 0;
}
