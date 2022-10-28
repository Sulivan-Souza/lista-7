#include <stdio.h>
#define QL 5
#define QC 3
int main()
{
    int i, j;
    int a[QL][QC], b[QL][QC], c[QL][QC];
    for (i=0; i<QL; i++) {
        for (j=0; j<QC; j++) {
            printf("A[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    for (i=0; i<QL; i++) {
        for (j=0; j<QC; j++) {
            printf("B[%d][%d]: ", i, j);
            scanf("%d", &b[i][j]);
        }
    }
    for (i=0; i<QL; i++) {
        for (j=0; j<QC; j++) {
            c[i][j] = a[i][j] + b[i][j];
        }
    }
    printf("\n");
    for (i=0; i<QL; i++) {
        for (j=0; j<QC; j++) {
            printf("\t%d", a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for (i=0; i<QL; i++) {
        for (j=0; j<QC; j++) {
            printf("\t%d", b[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for (i=0; i<QL; i++) {
        for (j=0; j<QC; j++) {
            printf("\t%d", c[i][j]);
        }
        printf("\n");
    }
    return 0;
}