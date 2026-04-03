#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    n = n / 10;       
    int secondLast = n % 10;

    cout << secondLast << endl;

    return 0;
}
