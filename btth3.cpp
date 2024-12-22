#include <stdio.h>

int main() {
    int arrayInt[100];  
    int currentLength;  

    printf("Moi nhap vao so luong phan tu cua mang: ");
    scanf("%d", &currentLength);

    for (int i = 0; i < currentLength; i++) {
        printf("Moi nhap phan tu thu [%d]: ", i + 1);
        scanf("%d", &arrayInt[i]);
    }

    int deleteIndex;
    printf("Moi nhap vao vi tri can xoa: ", currentLength - 1);
    scanf("%d", &deleteIndex);

    if (deleteIndex < 0 || deleteIndex >= currentLength) {
        printf("Vi tri vua nhap khong hop le!\n");
        return 1;
    }

    for (int i = deleteIndex; i < currentLength - 1; i++) {
        arrayInt[i] = arrayInt[i + 1];
    }
    currentLength--;

    printf("Day la mang sau khi chinh sua:\n");
    for (int i = 0; i < currentLength; i++) {
        printf("%d ", arrayInt[i]);
    }
    printf("\n");

    return 0;
}

