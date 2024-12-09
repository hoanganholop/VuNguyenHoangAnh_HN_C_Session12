#include<stdio.h>

void displayArray(int arr[], int size);

int main(){
	int arr[]={1,2,3,4,5,6,7,8,9};
	int size=sizeof(arr)/sizeof(arr[0]);
	
	displayArray(arr,size);
	return 0;
}
void displayArray(int arr[],int size){
	for(int i=0;i<size;i++){
		printf("%3d", arr[i]);
	}
	printf("\n");
}
