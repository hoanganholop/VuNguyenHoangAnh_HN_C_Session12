#include <stdio.h>
#include <stdbool.h>

void nhapMang(int arr[100][100], int n, int m);
void inMang(int arr[100][100], int n, int m);
void inCacPhanTuGoc(int arr[100][100], int n, int m);
void inCacPhanTuDuongBien(int arr[100][100], int n, int m);
void inCacPhanTuCheoChinhPhu(int arr[100][100], int n, int m);
bool kiemTraSoNguyenTo(int num);
void inCacSoNguyenTo(int arr[100][100], int n, int m);
void displayMenu();

int main() {
    int arr[100][100] = {0};
    int n, m;
    int choice;
    printf("Nhap so hang cua ma tran: ");
    scanf("%d", &n);
    printf("Nhap so cot cua ma tran: ");
    scanf("%d", &m);
    do {
        displayMenu();
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                nhapMang(arr, n, m);
                break;
            case 2:
                inMang(arr, n, m);
                break;
            case 3:
                inCacPhanTuGoc(arr, n, m);
                break;
            case 4:
                inCacPhanTuDuongBien(arr, n, m);
                break;
            case 5:
                inCacPhanTuCheoChinhPhu(arr, n, m);
                break;
            case 6:
                inCacSoNguyenTo(arr, n, m);
                break;
            case 7:
                printf("Thoat chuong trinh.\n");
                break;
            default:
                printf("Lua chon khong hop le. Vui long chon lai.\n");
        }
    } while (choice != 7);

    return 0;
}
void displayMenu() {
    printf("--------MENU--------\n");
    printf("1. Nhap gia tri cac phan tu cua mang\n");
    printf("2. In gia tri cac phan tu cua mang theo ma tran\n");
    printf("3. In ra cac phan tu o goc theo ma tran\n");
    printf("4. In ra cac phan tu nam tren duong bien theo ma tran\n");
    printf("5. In ra cac phan tu nam tren duong cheo chinh va cheo phu theo ma tran\n");
    printf("6. In ra cac phan tu la so nguyen to theo ma tran\n");
    printf("7. Thoat\n");
}
void nhapMang(int arr[100][100], int n, int m) {
    printf("Nhap gia tri cac phan tu cua ma tran:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
        	printf("Nhap gia tri phan tu thu arr[%d][%d]:", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
}
void inMang(int arr[100][100], int n, int m) {
    printf("Gia tri cac phan tu cua ma tran:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%3d ", arr[i][j]);
        }
        printf("\n");
    }
}
void inCacPhanTuGoc(int arr[100][100], int n, int m) {
    printf("Cac phan tu o goc:\n");
    printf("%3d %3d\n", arr[0][0], arr[0][m-1]);
    printf("%3d %3d\n", arr[n-1][0], arr[n-1][m-1]);
}
void inCacPhanTuDuongBien(int arr[100][100], int n, int m) {
    printf("Cac phan tu tren duong bien:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (i == 0 || i == n - 1 || j == 0 || j == m - 1) {
                printf("%3d ", arr[i][j]);
            } else {
                printf("  0 ");
            }
        }
        printf("\n");
    }
}
void inCacPhanTuCheoChinhPhu(int arr[100][100], int n, int m) {
    printf("Cac phan tu tren duong cheo chinh va cheo phu:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (i == j || i + j == n - 1) {
                printf("%3d ", arr[i][j]);
            } else {
                printf("  0 ");
            }
        }
        printf("\n");
    }
}
bool kiemTraSoNguyenTo(int num) {
    if (num < 2) return false;
    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) return false;
    }
    return true;
}
void inCacSoNguyenTo(int arr[100][100], int n, int m) {
    printf("Cac phan tu la so nguyen to trong ma tran:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (kiemTraSoNguyenTo(arr[i][j])) {
                printf("%3d ", arr[i][j]);
            } else {
                printf("  0 ");
            }
        }
        printf("\n");
    }
}

