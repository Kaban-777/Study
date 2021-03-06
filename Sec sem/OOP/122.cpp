#include <iostream>
#include <iomanip>

using namespace std;

class Matrix {
public:

    int m_n;
    int* m_darr;

    Matrix(int n, int* darr) {
        m_n = n;
        m_darr = darr;
    }
    void arr() {
        for (int i = 0; i < m_n; i++) {
            cout << setw(5) << m_darr[i];
        }
        cout << endl;
    }
    void arr2() {
        for (int i = m_n - 1; i >= 0; i--) {
            cout << setw(5) << m_darr[i];
        }
    }
};

int main() {
    int n;
    cin >> n;
    if (n <= 10) {

        int* darr = new int[n];
        for (int i = 0; i < n; i++) {
            cin >> darr[i];
        }
        cout << "N = " << n << endl;
        Matrix matrix(n, darr);
        matrix.arr();
        matrix.arr2();

        delete[] darr;
    }
    return 0;
}