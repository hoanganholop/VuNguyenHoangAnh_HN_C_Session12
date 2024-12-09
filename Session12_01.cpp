#include<stdio.h>

int calculateSum(int number1,int number2);
int main(){
	int a,b;
	printf("Nhap so thu nhat: ");
	scanf("%d",&a);
	printf("Nhap so thu hai: ");
	scanf("%d",&b);
	
	calculateSum(a,b);
	return 0;
}
int calculateSum(int number1,int number2){
	int sum = number1 + number2;
	printf("%d",sum);
	return sum;
}
