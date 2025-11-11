#include<stdio.h>
int main(){
    int n, x;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
    	printf("Cac phan tu cua mang la: ");
        scanf("%d", &arr[i]);
    }
    printf("So can tim trong mang la: ");
    scanf("%d", &x);
    int left = 0, right = n - 1;
    int found = -1;
    while (left <= right){
        int mid = (left + right) / 2;
        if(arr[mid] == x) {
            found = mid;
            break;
        }else if(arr[mid] < x) {
            left = mid + 1;
        }else{
            right = mid - 1;
        }
    }
    if(found != -1)
        printf("So can tim nam o mang %d\n", found);
    else
        printf("Khong tim thay nen ket qua se la -1\n");
    return 0;
}
