#include<stdio.h>
int Calculate(int n){
    if(n < 0){
        n = -n;
    }
    int sum = 0;
    while(n > 0){
        sum += n % 10;
        n /= 10;
    }
    return sum;
}
int main() {
    int n;
    printf("Nhap vao mot so nguyen: ");
    scanf("%d", &n);
    printf("Tong cac chu so cua %d la: %d\n", n, Calculate(n));
    return 0;
}
