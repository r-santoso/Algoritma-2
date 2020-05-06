#include <iostream>

using namespace std;

int main() {
    int i = 1;
    int n;

    cout << "Masukkan bilangan bulat : ";
    cin >> n;

    int f = n;
    while (i != n) {
        f = f * (n - i);
        i++;

    }

    cout << "Faktorial dari " << n << " adalah : " << f << endl;
    return 0;
}
