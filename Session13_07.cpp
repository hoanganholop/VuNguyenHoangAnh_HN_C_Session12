#include<stdio.h>

void taoMaTran(int arr[100][100],int rows, int cols);

int main(){
	int arr[100][100];
	int rows, cols;
	printf("Nhap so hang:");
	scanf("%d", &rows);
	printf("Nhap so cot:");
	scanf("%d", &cols);
	for(int i=0;i<rows;i++){
		for(int j=0;j<cols;j++){
			printf("Nhap phan tu vi tri arr[%d][%d]:",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
	taoMaTran(arr, rows, cols);
	return 0;
}
void taoMaTran(int arr[100][100],int rows, int cols){
	printf("Ma tran cua mang la:\n");
	for(int i=0;i<rows;i++){
		for(int j=0;j<cols;j++){
			printf("%3d",arr[i][j]);
		}
		printf("\n");
	}
}
