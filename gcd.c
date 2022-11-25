#include<stdio.h>
#include<conio.h>

int gcd(int n, int m){
    int result, i;
    for (i=1; i<=n; i++){
        if (n%i == 0 && m%i == 0){
            result = i;
        }
    }
    return result;
}

int lcm(int n, int m){
    int result;
    result = (m * n) / gcd(m, n);
    return result;
}


int main(){
    int num1, num2;
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);
    printf("The greatest common factor is %d\n", gcd(num1, num2));
    printf("The lowest common factor is %d\n", lcm(num1, num2));
    return 0;
}