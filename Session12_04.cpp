#include<stdio.h>

int displayMaxNumber(int arr[], int size);

int main(){
	int arr[]={1,2,3,4,5,6,7,8,9};
	int size=sizeof(arr)/sizeof(arr[0]);
	
	int temp=displayMaxNumber(arr,size);
	printf("So lon nhat trong mang: %d", temp);
	return 0;
}
int displayMaxNumber(int arr[],int size){
	int temp=0;
	for(int i=0;i<size;i++){
		if(temp<arr[i]){
			temp=arr[i];
			arr[i]=temp;
		}
	}
	return temp;
}
