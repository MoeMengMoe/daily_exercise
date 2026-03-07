#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int a[] = {1, 2, 3};
    do {
        cout << a[0] << " " << a[1] << " " << a[2] << endl;
    } while (next_permutation(a, a + 3)); // 注意这里是 a+3，表示到第3个元素为止
    return 0;
}