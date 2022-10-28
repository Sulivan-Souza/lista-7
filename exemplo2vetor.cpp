#include<iostream>

using namespace std;
#define QTDL 2
#define QTDC 4

main() {
    float a[QTDL][QTDC];
    int i,j;
    cout << "\nDigite a matriz:"<<endl;
    for(i=0;i<QTDL;i++){
        for(j=0;j<QTDC;j++){
            cout << "a["<<i<<"]["<<j<<"]=";
            cin >> a[i][j];
        }
    }
}