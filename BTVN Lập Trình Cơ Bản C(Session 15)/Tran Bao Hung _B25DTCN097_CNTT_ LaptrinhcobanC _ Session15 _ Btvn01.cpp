#include<stdio.h>
int main(){
	int a, b;
	int difference;
	int multiply;
	printf("Nhap vao so nguyen thu nhat: ");
	scanf("%d",&a);
	printf("Nhap vao so nguyen thu hai: ");
	scanf("%d",&b);
	difference = a-b;
	printf("Hieu cua hai so nguyen la: %d\n",difference);
	if(a-b < 0){
		int difference = -(a-b);
		printf("Su chenh lech giua hai so la: %d\n",difference);
	}else{
		printf("Su chenh lech giua hai so la: %d\n",difference);
	}
	multiply = a*b;
	printf("Tich cua hai so nguyen la: %d\n",multiply);
	return 0;
}
