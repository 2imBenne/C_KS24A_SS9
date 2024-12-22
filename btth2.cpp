#include <stdio.h>

int main() {
    int arrayInt[] = {100, 200, 300, 400, 500}; 
    int n = sizeof(arrayInt) / sizeof(arrayInt[0]); 


    printf("Day la cac gia tri ban dau cua mang:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arrayInt[i]);
    }
    printf("\n");

    int index, newValue;
    printf("Moi nhap vao vi tri can chinh sua: ", n - 1);
    scanf("%d", &index);
    printf("Moi nhap gia tri moi mong muon: ");
    scanf("%d", &newValue);

    if (index < 0 || index >= n) {
        printf("Vi tri nhap vao khong hop le!\n");
        return 1;
    }

    arrayInt[index] = newValue;

    printf("Mang chua gia tri sau khi sua la:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arrayInt[i]);
    }
    printf("\n");

    return 0;
}

