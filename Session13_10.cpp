#include <stdio.h>

void displayMenu();
int nhapMang(int arr[], int *n);
int inMang(int arr[], int n);
int themPhanTu(int arr[], int *n, int position, int value);
int suaPhanTu(int arr[], int n, int position, int value);
int xoaPhanTu(int arr[], int *n, int position);
int sapXepTangDan(int arr[], int n);
int sapXepGiamDan(int arr[], int n);
int timKiemTuyenTinh(int arr[], int n, int findIndex);
int timKiemNhiPhan(int arr[], int n, int findIndex);

int main() {
    int arr[100];
    int n = 0;
    int choice, position, value, searchIndex;
    char choice2;
    do {
        displayMenu();
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                nhapMang(arr, &n);
                break;
            case 2:
                inMang(arr, n);
                break;
            case 3:
                printf("Nhap vi tri can them (0-%d): ",n-1);
                scanf("%d", &position);
                printf("Nhap gia tri can them: ");
                scanf("%d", &value);
                themPhanTu(arr, &n, position, value);
                break;
            case 4:
                printf("Nhap vi tri can sua (0-%d): ",n-1);
                scanf("%d", &position);
                printf("Nhap gia tri moi: ");
                scanf("%d", &value);
                suaPhanTu(arr, n, position, value);
                break;
            case 5:
                printf("Nhap vi tri can xoa (0-%d): ",n-1);
                scanf("%d", &position);
                xoaPhanTu(arr, &n, position);
                break;
            case 6:
                printf("a. Giam dan\n");
                printf("b. Tang dan\n");
                printf("Lua chon cua ban: ");
                scanf(" %c", &choice2);
                if (choice2 == 'a') {
                    sapXepGiamDan(arr, n);
                } else if (choice2 == 'b') {
                    sapXepTangDan(arr, n);
                } else {
                    printf("Lua chon khong hop le!\n");
                }
                break;
            case 7:
                printf("Nhap gia tri can tim: ");
                scanf("%d", &searchIndex);
                printf("a. Tim kiem tuyen tinh\n");
                printf("b. Tim kiem nhi phan\n");
                printf("Lua chon cua ban: ");
                scanf(" %c", &choice2);
                if (choice2 == 'a') {
                    position = timKiemTuyenTinh(arr, n, searchIndex);
                } else if (choice2 == 'b') {
                    sapXepTangDan(arr, n);
                    position = timKiemNhiPhan(arr, n, searchIndex);
                } else {
                    printf("Lua chon khong hop le!\n");
                    break;
                }
                if (position != -1) {
                    printf("Phan tu %d duoc tim thay tai vi tri %d.\n", searchIndex, position);
                } else {
                    printf("Khong tim thay phan tu %d trong mang.\n", searchIndex);
                }
                break;
            case 8:
                printf("Thoat chuong trinh.\n");
                break;
            default:
                printf("Lua chon khong hop le. Vui long chon lai.\n");
        }
    } while (choice != 8);

    return 0;
}
void displayMenu() {
    printf("--------MENU--------\n");
    printf("1. Nhap so phan tu can nhap va gia tri cac phan tu\n");
    printf("2. In ra gia tri cac phan tu dang quan ly\n");
    printf("3. Them mot phan tu vao vi tri chi dinh\n");
    printf("4. Sua mot phan tu o vi tri chi dinh\n");
    printf("5. Xoa mot phan tu o vi tri chi dinh\n");
    printf("6. Sap xep cac phan tu\n");
    printf("   a. Giam dan\n");
    printf("   b. Tang dan\n");
    printf("7. Tim kiem phan tu nhap vao\n");
    printf("   a. Tim kiem tuyen tinh\n");
    printf("   b. Tim kiem nhi phan\n");
    printf("8. Thoat\n");
}
int nhapMang(int arr[], int *n) {
    printf("Nhap so phan tu can nhap: ");
    scanf("%d", n);
    for (int i = 0; i < *n; i++) {
        printf("Nhap gia tri phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    return 0;
}
int inMang(int arr[], int n) {
    printf("Cac phan tu cua mang: ");
    for (int i = 0; i < n; i++) {
        printf("%3d ", arr[i]);
    }
    printf("\n");
    return 0;
}
int themPhanTu(int arr[], int *n, int position, int value) {
    if (position < 0 || position > *n) {
        printf("Vi tri khong hop le!\n");
        return 1;
    }

    for (int i = *n; i > position; i--) {
        arr[i] = arr[i - 1];
    }
    arr[position] = value;
    (*n)++;
    return 0;
}
int suaPhanTu(int arr[], int n, int position, int value) {
    if (position < 0 || position >= n) {
        printf("Vi tri khong hop le!\n");
        return 1;
    }

    arr[position] = value;
    return 0;
}
int xoaPhanTu(int arr[], int *n, int position) {
    if (position < 0 || position >= *n) {
        printf("Vi tri khong hop le!\n");
        return 1;
    }

    for (int i = position; i < *n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    (*n)--;
    return 0;
}
int sapXepTangDan(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    return 0;
}
int sapXepGiamDan(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] < arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    return 0;
}
int timKiemTuyenTinh(int arr[], int n, int findIndex) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == findIndex) {
            return i;
        }
    }
    return -1;
}
int timKiemNhiPhan(int arr[], int n, int findIndex) {
    int left = 0, right = n - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == findIndex) {
            return mid;
        } else if (arr[mid] < findIndex) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1;
}
