#include <stdio.h>

void taoMaTran(int m, int n, int maTran[100][100]) {
    printf("Nhap cac gia tri cho ma tran %dx%d:\n", m, n);
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("Nhap gia tri cho phan tu [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &maTran[i][j]);
        }
    }
}

void inMaTran(int m, int n, int maTran[100][100]) {
    printf("Ma tran vua nhap la:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", maTran[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int m, n;
    
    printf("Nhap so hang cua ma tran: ");
    scanf("%d", &m);
    printf("Nhap so cot cua ma tran: ");
    scanf("%d", &n);

    int maTran[100][100];
    
    taoMaTran(m, n, maTran);
    
    inMaTran(m, n, maTran);
    
    return 0;
}