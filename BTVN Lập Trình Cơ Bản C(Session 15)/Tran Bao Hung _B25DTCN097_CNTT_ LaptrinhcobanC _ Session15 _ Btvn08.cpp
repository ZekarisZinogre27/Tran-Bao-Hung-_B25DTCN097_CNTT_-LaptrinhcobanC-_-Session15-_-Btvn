#include <stdio.h>
int deletenumber(int array[], int size, int index) {
    for (int i = index; i < size - 1; i++) {
        array[i] = array[i + 1];
    }
    int newSize = size - 1;
    return newSize;
}
int removeDuplicate(int array[], int size) {
    int newSize = size;
    for (int i = 0; i < newSize; i++) {
        for (int j = i + 1; j < newSize; j++) {
            if (array[i] == array[j]) {
                newSize = deletenumber(array, newSize, j);
                j--;
            }
        }
    }
    return newSize;
}
int main() {
	int array[100];
	int size;
	printf("Nhap so luong phan tu cua mang: ");
	scanf("%d", &size);
	for (int i = 0; i < size; i++) {
    	scanf("%d", &array[i]);
	}
    //int size = sizeof(array) / sizeof(array[0]);
    size = removeDuplicate(array, size);
    printf("Mang sau khi xoa trung lap la : ");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    return 0;
}
