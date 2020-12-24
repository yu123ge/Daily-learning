#include <iostream>
using namespace std;
int bubble_sort(int a[], int n) {
    int cnt = 0;
    for (int i = 0; i < n - 1; i++) {
        for (int j = n - 1; j >= i + 1; j--) {
            if (a[j] < a[j - 1]) {
                cnt++, swap(a[j], a[j - 1]);
            };
        }
    }
    return cnt;
}
void output_result(int a[], int n) {
    for (int i = 0; i < n; i++) {
        if (i > 0) {
            cout << " ";
        }
        cout << a[i];
    }
    cout << endl;
}
const int N = 100;
int a[N];
int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int cnt = bubble_sort(a, n);
    output_result(a, n);
    cout << cnt << endl;
    return 0;
}
