#include<stdio.h>

int timUocChung(int numb1, int numb2);
int main(){
	int numb1,numb2;
	printf("Nhap so thu nhat:");
	scanf("%d",&numb1);
	printf("Nhap so thu hai:");
	scanf("%d",&numb2);
	int result=timUocChung(numb1,numb2);
	printf("Uoc chung lon nhat la: %d",result);
	
	return 0;
}
int timUocChung(int numb1, int numb2){
	while(numb2!=0){
		int temp = numb2;
		numb2=numb1%numb2;
		numb1=temp;
	}
	return numb1;
}
