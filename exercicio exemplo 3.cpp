#include <iostream>
using namespace std;
#define TAM 10
main() {
float a[TAM], b[TAM], c[TAM];
int i;
cout << "\nDigite o vetor a:" << endl;
for (i=0; i<TAM; i++) {
cout << "a[" << i << "] = ";
cin >> a[i];
}
cout << "\nDigite o vetor b:" << endl;
for (i=0; i<TAM; i++) {
cout << "b[" << i << "] = ";
cin >> b[i];
}
for (i=0; i<TAM; i++) {
c[i] = a[i] + b[i];
}
cout << "\nNovo Vetor c = a + b:\n" << endl;

    for (i=0; i<TAM; i++) 
    {
        cout << "c[" << i << "] = " << c[i] << endl;
    }
}