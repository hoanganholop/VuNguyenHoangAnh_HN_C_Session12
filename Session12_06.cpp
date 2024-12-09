#include <stdio.h>
#include <stdbool.h>

bool checkPerfectNumber(int n);
int main(){
    int num1, num2;
    printf("Nhap so thu nhat: ");
    scanf("%d", &num1);
    printf("Nhap so thu hai: ");
    scanf("%d", &num2);
    if (checkPerfectNumber(num1)){
        printf("%d la so hoan hao\n", num1);
    }else{
        printf("%d khong phai la so hoan hao\n", num1);
    }
    if(checkPerfectNumber(num2)){
        printf("%d la so hoan hao\n", num2);
    }else{
        printf("%d khong phai la so hoan hao\n", num2);
    }
    return 0;
}
bool checkPerfectNumber(int n) {
    if(n<1){
        return false;
    }
    int sum=0;
    for(int i=1;i<=n/2;i++){
        if(n%i==0){
            sum+=i;
        }
    }
    return sum==n;
}

