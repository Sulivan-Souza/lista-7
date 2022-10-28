
#include <iostream>
using namespace std;
int main()
{
    int a[100][100], n, m, i, j, soma;
    cout << "N: ";
    cin >> n;
    while (n > 100) {
        cout << "N (<=100): ";
        cin >> n;
    }
    cout << "M: ";
    cin >> m;
    while (m > 100) {
        cout << "M (<=100): ";
        cin >> m;
    }
    for (i=0; i<n; i++) {
        for (j=0; j<m; j++) {
            cout << "A[" << i << "][" << j << "]: ";
            cin >> a[i][j];
        }
    }
    soma = 0;
    for (i=0; i<n; i++) {
        for (j=0; j<m; j++) {
            if (i >= j) {
                soma = soma + a[i][j];
            }
        }
    }
    cout << "Soma = " << soma << endl;
    return 0;
}