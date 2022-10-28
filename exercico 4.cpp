#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    int vet[20], n, i, somatoria;
    //cout << "N: ";
    printf("N: ");
    //cin >> n;
    scanf("%d", &n);
    while (n > 20) {
        //cout << "N (<=20): ";
        printf("N (<=20): ");
        //cin >> n;
        scanf("%d", &n);
    }
    for (i=0; i<n; i++) {
        //cout << "V[" << i << "]: ";
        printf("V[%d]: ", i);
        //cin >> vet[i];
        scanf("%d", &vet[i]);
    }
    somatoria = 0;
    for (i=0; i<n; i++) {
        somatoria = somatoria + vet[i];
    }
    //cout << "Somatoria = " << somatoria << endl;
    printf("Somatoria = %d\n", somatoria);
    return 0;
}