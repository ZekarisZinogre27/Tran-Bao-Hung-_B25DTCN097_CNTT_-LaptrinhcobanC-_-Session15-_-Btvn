#include <stdio.h>
int nhapMang(int a[]) {
    int n;
    printf("Nhap so luong phan tu: ");
    scanf("%d", &n);
    printf("Nhap %d phan tu cua mang:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    return n;
}
void timPhanTuXuatHienItNhat(int a[], int n) {
    int min_freq = n + 1;
    int value_min_freq = a[0];
    for (int i = 0; i < n; i++) {
        int count = 1;
        for (int j = i + 1; j < n; j++) {
            if (a[i] == a[j]) count++;
        }
        int daXet = 0;
        for (int k = 0; k < i; k++) {
            if (a[k] == a[i]) {
                daXet = 1;
                break;
            }
        }
        if (!daXet && count < min_freq) {
            min_freq = count;
            value_min_freq = a[i];
        }
    }
    printf("Phan tu xuat hien it nhat la %d (%d lan)\n", value_min_freq, min_freq);
}
int main() {
    int a[100];
    int n = nhapMang(a);
    timPhanTuXuatHienItNhat(a, n);
    return 0;
}
