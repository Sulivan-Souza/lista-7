#include <iostream>
using namespace std;
#define LIN 3
#define COL 6
int main()
{
    int m[LIN][COL], i, j, soma[COL];
    for (i=0; i<LIN; i++) {
        for (j=0; j<COL; j++) {
            cout << "M[" << i << "][" << j << "]: ";
            cin >> m[i][j];
        }
    }
    for (j=0; j<COL; j++) {
        soma[j] = 0;
    }
    for (i=0; i<LIN; i++) {
        for (j=0; j<COL; j++) {
            soma[j] = soma[j] + m[i][j];
        }
    }
    cout << endl;
    for (i=0; i<LIN; i++) {
        for (j=0; j<COL; j++) {
            cout << "\t" << m[i][j];
        }
        cout << endl;
    }
    cout << endl;
    for (j=0; j<COL; j++) {
        cout << "\t" << soma[j];
    }
    cout << endl;
    return 0;
}
