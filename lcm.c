#include<stdio.h>

int maxx(int n, int m){
    int max;
    if (n > m)
        max = n;
    else if (n < m)
        max = m;
    else   
        max = m;
    return max;
}

int lcm(int n, int m){  // n=6  m=12
    int result, max;
    max = maxx(n, m);
    while (1){
        if ((max%n == 0) && (max%m == 0)){
            printf("LCM = %d\n", max);
            break;
        }
        max++;
    }

    return result;
}

int main(){
    int n, m;
    printf("Enter the first number: ");
    scanf("%d", &n);
    printf("Enter the second number: ");
    scanf("%d", &m);
    lcm(n, m);
    return 0;
}