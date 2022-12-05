#include <iostream>
#include <stack>

using namespace std;

int main() {
    int n;
    cout << "Masukkan angka: ";
    cin >> n;
    stack<int> stk;
    stk.push(1);
    for (int i = 2; i <= n; ++i) {
        stk.push(stk.top() * i);
    }
    cout << "Hasil Faktorial: " << stk.top() << endl;
    return 0;
}
