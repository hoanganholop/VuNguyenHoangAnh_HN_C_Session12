#include<stdio.h>

long long factorial(int n);
int main(){
	int numb;
	printf("Nhap so nguyen bat ky: ");
	scanf("%d", &numb);
	
	long long result=factorial(numb);
	printf("Ket qua: %lld", result);
	return 0;
}
long long factorial(int n){
	if(n==1){
		return 1;
	}
	long long result=n;
	return result*factorial(n-1);
}
