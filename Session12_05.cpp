#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool checkPrimeNumber(int n);

int main() {
    int num1, num2;
    printf("Nhap so thu nhat: ");
    scanf("%d", &num1);
    printf("Nhap so thu hai: ");
    scanf("%d", &num2);

    if(checkPrimeNumber(num1)){
        printf("%d la so nguyen to\n", num1);
    }else{
        printf("%d khong phai la so nguyen to\n", num1);
    }
    if(checkPrimeNumber(num2)){
        printf("%d la so nguyen to\n", num2);
    }else{
        printf("%d khong phai la so nguyen to\n", num2);
    }
    return 0;
}
bool checkPrimeNumber(int n){
    if (n<2){
        return false;
    }
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
