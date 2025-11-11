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
void timPhanTuXuatHienNhieuNhat(int a[], int n) {
    int max_freq = 0;
    int value_max_freq = a[0];
    for (int i = 0; i < n; i++) {
        int count = 1;
        for (int j = i + 1; j < n; j++) {
            if (a[i] == a[j]) count++;
        }
        if (count > max_freq) {
            max_freq = count;
            value_max_freq = a[i];
        }
    }
    printf("Phan tu xuat hien nhieu nhat la %d (%d lan)\n", value_max_freq, max_freq);
}
int main() {
    int a[100];
    int n = nhapMang(a);
    timPhanTuXuatHienNhieuNhat(a, n);
    return 0;
}
