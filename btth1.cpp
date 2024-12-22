#include <stdio.h>

int main() {
    int arrayInt[100];  
    int currentLength;  
    printf("Moi nhap vao so phan tu cho mang:  ");
    scanf("%d", &currentLength);

    for (int i = 0; i < currentLength; i++) {
        printf("Moi nhap phan tu vi tri thu [%d]: ", i + 1);
        scanf("%d", &arrayInt[i]);
    }

    int value, addIndex;
    printf("Moi nhap gia tri can them: ");
    scanf("%d", &value);
    printf("Moi nhap vi tri can them: ", currentLength);
    scanf("%d", &addIndex);

    if (addIndex < 0 || addIndex > 100) {
        printf("Vi tri vua nhap khong hop le!\n");
        return 1;
    }

    if (addIndex >= currentLength) {
        arrayInt[addIndex] = value;
        currentLength = addIndex + 1;
    } else {
        for (int i = currentLength; i > addIndex; i--) {
            arrayInt[i] = arrayInt[i - 1];
        }
        arrayInt[addIndex] = value;
        currentLength++;
    }

    printf("Day la mang sau khi them phan tu moi:\n");
    for (int i = 0; i < currentLength; i++) {
        printf("%d ", arrayInt[i]);
    }
    printf("\n");

    return 0;
}

